#include <bits/stdc++.h>
#define ll long long
//push_back make_pair emplace vector double float _unordered_map unodered_set queue stack 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
ll divide(ll x, ll y) {
    return (x + y - 1) / y;
}
int main() { fastIO
	ll T, x, y, k;cin >> T;
	while (T--){
		cin >> x >> y >> k;
		cout <<  divide(k + k * y - 1, x - 1) + k << endl;
	}
}
 
