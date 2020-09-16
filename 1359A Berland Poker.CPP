#include <bits/stdc++.h>
#define ll long long
//push_back make_pair emplace vector double float _unordered_map unodered_set queue stack 
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
double T, cards, jokers, players;
int main() { fastIO
	cin >> T;
	while (T--){
		cin >> cards >> jokers >> players;
		if (jokers == 0 ||  jokers == cards) cout << 0 << endl;
		else {
			if (jokers <= cards/players) cout << jokers << endl;
			else{
				cout << (cards/players) - ceil((jokers - (cards/players)) / (players - 1)) << endl;
			}
		}
	}
}
