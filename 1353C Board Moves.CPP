#include <bits/stdc++.h>
#define ll long long
//push_back make_pair emplace vector double float _unordered_map unodered_set queue stack 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
double T, n;
int main() { fastIO
	cin >> T;
	while (T--){
		cin >> n;
		ll answer = 0, distance = 1;
		for (int i = 3; i <= n; i += 2){
			ll tiles = (i * 2) + (2 * (i - 2));
			answer += distance * tiles;
			++distance;
		} cout << answer << endl;
	}
}
