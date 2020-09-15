#include <bits/stdc++.h>
#define ll long long
//push_back make_pair emplace vector double float _unordered_map unodered_set queue stack 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll divide(ll x, ll y) {
    return (x + y - 1) / y;
}
int main() { fastIO
	ll T, n, k;cin >> T;
	while (T--){
		cin >> n;
		ll pos = 0, cost = 0;
		for (int i = 0 ; i < n ; i++){
			cin >> k;
			if (k > 0) pos += k;
			if (k < 0) {
				if (pos > 0){
					if (pos + k >= 0) pos += k;
					else {cost += abs(pos + k); pos = 0;}
				}
				else cost += abs(k);
			}
		} cout << cost << endl;
	}
}
