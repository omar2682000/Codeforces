#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
	int n, m; 
	vector <int> boys,girls;
	cin >> n;for(int i=0;i<n;i++){int b;cin>>b;boys.pb(b);}
	cin >> m;for(int i=0;i<m;i++){int g;cin>>g;girls.pb(g);}
	sort(boys.begin(),boys.end());
	sort(girls.begin(),girls.end());
	int l = 0, r = 0, ans = 0;
	while (l < n || r < m){
		if (abs(boys[l] - girls[r]) <= 1){
			ans++;
			++l;
			++r;
		}
		else if (boys[l] > girls[r]){
			++r;
		}
		else if (boys[l] < girls[r]){
			++l;
		}
		
	} cout << ans << endl;
}
