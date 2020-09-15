#include <bits/stdc++.h>
#define ll long long
//push_back make_pair emplace vector double float _unordered_map unodered_set queue stack 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
bool check(vector<int>arr){
	int odd = 0;
	for (int i : arr) {if (i%2)++odd; if (i<0)return 0;}
	if (odd<=1 )return 1; else return 0;
}
int main() { fastIO
	ll T, r, g, b, w;cin >> T;
	while (T--){
		cin >> r >> g >> b >> w;
		vector<int> piv = {r,g,b,w};
		 if (check(piv)) cout << "Yes\n";
		else{
			for (int i = 0 ; i < 3 ; i++)piv[i]--;
			piv[3]+=3;
			if (check(piv))cout << "Yes\n";else cout << "No\n";
		}
	}
}
