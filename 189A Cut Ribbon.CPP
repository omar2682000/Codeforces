#include <bits/stdc++.h>
void definitions(){
#define ll long long
#define vec vector
#define dl double
#define pi pair  < int , int >
#define pl pair < ll , ll >
#define files_mode freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define fl float
#define PAIR make_pair
#define INF 1e9
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
}
using namespace std;
/******************* This Code was written by : Omar Al-Jarrah ********************/
int a , b , c , n;
int dp[4001];
int solve(int robe){
    if (robe == n) return 0;
    if (robe > n) return -1e9;
    if (dp[robe] != -1) return dp[robe];
    return dp[robe] = max({solve(robe + a) + 1 , solve(robe + b) + 1 , solve(robe + c) + 1});
}
int main() {definitions();fastIO
    cin >> n >> a >> b >> c;
    memset(dp , -1 , sizeof dp);
    cout << solve(0) << endl;
    return 0;}
