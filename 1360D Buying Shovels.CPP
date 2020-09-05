#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){ fastIO
	int T ; cin >> T;int n, k; 
	while (T--){
		cin >> n >> k;
		vector < int > div;
		for (int i = 1 ; i * i <= n ; i++){
			if (n%i == 0){
				div.push_back(i);
				if (n / i != i){
					div.push_back(n / i);
				}
				}
		}
		int ans = 0;
		sort(div.rbegin(),div.rend());
		for (int i : div){
			if (i <= k && i > ans)
				ans = i;
		}	cout << n / ans << endl;
		div.clear();
	}
}
