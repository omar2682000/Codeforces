#include <bits/stdc++.h>
#define ll long long
//push_back make_pair emplace vector double float _unordered_map unodered_set queue stack 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll T, a, b;
int main() { fastIO
	cin >> T;
	while (T--){
		cin >> a >> b;
		ll u = max(a, b);
		ll v = min(a, b);
		int ans = 0;
		while (u > v){
			if (u % 8 == 0 && u/8 >= v) {u = u / 8;++ans;}
			else if (u % 4 == 0 && u/4 >= v){u = u / 4; ++ans;}
			else if (u % 2 == 0 && u/2 >= v){u = u / 2; ++ans;}
			else {ans = -1;break;}
		} cout << ans << endl;
	}
}
