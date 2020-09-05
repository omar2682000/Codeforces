#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
int main() {
	int T; cin>> T;
	while(T--){
		int a, b, answer = 0;
		cin >> a >> b;
		if (abs(a - b) > 10){
			answer += abs(a - b)/10;
			if (abs(a - b)%10!=0)answer += 1;
		}
		else if (a==b)answer=0;
		else answer++; 
		cout << answer << endl;
	}
	
}
