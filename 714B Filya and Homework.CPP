#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
unordered_set<int>arr;
set<int> piv;
int main() { fastIO
	int n; cin >> n;
	for (int i = 0 ; i < n ; i++){
		int k; cin >> k; arr.emplace(k);
	}
	if (arr.size() <= 2) cout << "YES" << endl;
	else if (arr.size() == 3){
		vector<int> nums;
		for (int i : arr)nums.push_back(i);
		sort(nums.begin(), nums.end());
		if (abs(nums[0] - nums[1]) == abs(nums[1] - nums[2])) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	else cout << "NO" << endl;
}
 
