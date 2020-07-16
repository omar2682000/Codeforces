#include <bits/stdc++.h>
void definitions(){
#define ll long long
#define vec vector
#define dl double
#define array_input(array , size) for (int i = 0 ; i < size ; ++i)cin >> array[i];
#define matrix_input(matrix , row , col) for (int i = 0 ; i < row ; ++i) for (int j = 0 ; j < col ; ++j) cin >> matrix[i][j];
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
ll arith_sum(ll n){return (n * (n + 1) / 2);}
int main() {definitions();fastIO
    int T; ll n; cin >> T;
    while (T--){
        cin >> n;
        ll ans = arith_sum(n);
        for (ll i = 1; i <= n; i *= 2) {
            ans -= 2 * i;
        }
        cout << ans << endl;
    }
    return 0;}
