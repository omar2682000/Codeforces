#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
const int N = 1005;
char arr[N][N];
vector<pair<int,int>> golems, candies;
int main() { fastIO
	int n, m, ans = 0;
	cin >> n >> m;
	for (int i = 1 ; i <= n ; i++)
		for (int j = 1 ; j <= m; j ++){
			cin >> arr[i][j];
			if (arr[i][j] == 'G')golems.push_back({i, j});
			if (arr[i][j] == 'S')candies.push_back({i, j});
		} bool possible = 1;
	for (int i = 0; i < golems.size(); i++){
		if (candies[i].second - golems[i].second < 0) {possible = 0;break;}
	}
	if (!possible)cout << -1 << endl;
	else{
		set<int>handle;
			for (int i = 0 ; i < golems.size() ; i++)
				handle.emplace(candies[i].second - golems[i].second);
		cout << handle.size() << endl;
	}
}
 
