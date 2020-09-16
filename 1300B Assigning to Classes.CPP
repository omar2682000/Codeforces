#include <bits/stdc++.h>
#define ll long long
//push_back make_pair emplace vector double float _unordered_map unodered_set queue stack sort begin end clear
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() { fastIO
	int T, n, k; cin >> T;
	vector<int> arr;
	while (T--){
		cin >> n;
		for (int i = 1 ; i <= 2*n ; i++) {
			cin >> k;
			arr.push_back(k);
		}
		sort(arr.begin(), arr.end());
		cout << arr[(n) ] - arr[(n) - 1] << endl;
		arr.clear();
	}
}
