#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){ fastIO
	int T ; cin >> T;int a , b;
	while (T--){
		cin >> a >> b;
		int x = max(a, b), m = min(a, b);
		m *= 2;
		int ans = pow(max(x, m), 2);
		cout << ans << endl;
	}
}
