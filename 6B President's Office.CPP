#include <bits/stdc++.h>
#define ll long long
#define pb push_back
//#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const int N = 105;
char arr[N][N];
map < char , int > mp;
int main(){
	int ans = 0;
	int n, m; 
	char p;
	cin >> n >> m >> p;
	for (int i = 1 ; i <= n ; i++){
		for (int j = 1 ; j <= m ; j++){
			cin >> arr[i][j];
		}
	}
	for (int i = 1 ; i <= n ; i++){
		for (int j = 1 ; j <= m ; j++){
			if (arr[i][j] != p && arr[i][j] != '.'){
				if (arr[i + 1][j] == p)mp[arr[i][j]]++;
				if (arr[i - 1][j] == p)mp[arr[i][j]]++;
				if (arr[i][j + 1] == p)mp[arr[i][j]]++;
				if (arr[i][j - 1] == p)mp[arr[i][j]]++;
			}
		}
	}
	for (auto i : mp) ++ans;
	cout << ans << endl;
}
 
