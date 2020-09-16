#include <bits/stdc++.h>
#define ll long long
//push_back make_pair emplace vector double float _unordered_map unodered_set queue stack 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll T, x, y, a, b;
int main() { fastIO
	cin >> T;
	while (T--){
		ll cost = 0;
		cin >> x >> y >> a >> b;
		bool useB = 2 * a > b;
		if (!useB) cost = (x * a) + (y * a);
		else {
			ll u = min(x, y), v = max(x, y);
			if (u == v) cost = u * b;
			else {
				cost += u * b;
				v -= u;cost += a * v;
			}
		} cout << cost << endl;
	}
}
