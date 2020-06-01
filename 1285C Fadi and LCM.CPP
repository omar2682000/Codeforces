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
#define INF (ll) 1e9
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
}
using namespace std;
/******************* This Code was written by : Omar Al-Jarrah ********************/
ll lcm(ll a , ll b){
    return a / __gcd(a, b) * b;
}
pl solve(ll n){
    pl result = PAIR(1 , n);
    for (ll i = 2 ; i <= sqrtl(n) ; i++){
        if (!(n % i))
            if (lcm(i , n / i) == n)//m
                if (max(i , n/i) < max(result.first , result.second))
                    result = PAIR(i , n / i );
    }
    return result;
}


int main() { definitions(); fastIO
    ll n; cin >> n;
    pl answer = solve(n);
    cout << answer.first << ' ' << answer.second << endl;
    return 0;}
