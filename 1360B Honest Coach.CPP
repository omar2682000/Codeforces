#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){ fastIO
	int T ; cin >> T;int n, k; vector < int > arr;
	while (T--){
		cin >> n;for (int i = 0 ; i < n ; i++) 
		{cin >> k;arr.push_back(k);}
		sort(arr.begin(), arr.end());
		int ans = 1e9;
		for (int i = 0 , j = 1 ; i < n - 1 && j < n; i++ , j++){
			ans = min(ans, abs(arr[j] - arr[i]));
			//cout << ans << endl;
		}
		cout << ans << endl;
		arr.clear();
	}
}
