#include <bits/stdc++.h>
#define ll long long
//push_back make_pair emplace vector double float _unordered_map unodered_set queue stack 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
string str;
int solve(){
	int open = 0, close = 0, piv;bool action = 0;
	for (int i = 0 ; i < str.size(); i++){
		if (str[i] == '(')open++;
		else{
			if (open)open--;
			else {action = 1;piv = i;break;}
		}
	}if (action) {
		char c = str[piv]; 
		str.erase(str.begin() + piv); 
		str.push_back(c);
		return solve() + 1; }
		else return 0;
}
int main() { fastIO
	int T, n;cin >> T;
	while (T--){
		cin >> n;
		cin >> str;
		cout << solve() << endl;
	}
}
