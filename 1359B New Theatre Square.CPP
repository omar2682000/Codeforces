#include <bits/stdc++.h>
#define ll long long
//push_back make_pair emplace vector double float _unordered_map unodered_set queue stack 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int T, n, m, x, y;
char arr[105][1005];
int main() { fastIO
	cin >> T;
	while (T--){
		cin >> n >> m >> x >> y;
		int w = 0, cost = 0;
		for (int i = 1 ; i <= n; i++)
			for (int j = 1; j <= m ; j++){
				cin >> arr[i][j];
				if (arr[i][j] == '.')++w;
			}
		bool use_two = (2 * x > y);
		if (!use_two) cout << w * x << endl;
		else{
			for (int i = 1; i <= n; i++)
				for (int j = 1; j <= m ; j++){
					if (arr[i][j] == '.' && arr[i][j + 1] == '.' && j != m){
						cost += y;++j;
					} else if (arr[i][j] == '.') cost += x;
				}
			cout << cost << endl;
		} 
	}
}
