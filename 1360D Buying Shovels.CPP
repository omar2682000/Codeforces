#include <bits/stdc++.h>
void definitions(){
#define ll long long
#define vec vector
#define dl double
#define pi pair  < int , int >
#define files_mode freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define fl float
#define PAIR make_pair
#define INF (ll) 1e9
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
}
using namespace std;

/******************* This Code was written by : Omar Al-Jarrah ********************/

vec < ll > divisors(ll n){
    vec < ll > result;
    for (ll i = 2 ; i <= sqrtl(n) ; i++ ){
        if (!(n % i)) {
            result.push_back(i);
            if (n / i != i)     result.push_back((ll)(n / i));
        }
    }
    sort(result.rbegin() , result.rend());
    return result;
}

ll solve(ll k , ll n , vec < ll > arr){
    if ( k == 1 || (arr.size() == 0 && k < n))
        return n;
    if (k >= n)
        return 1;
    for (int i = 0 ; i < arr.size() ; i++){
        if (arr[i] <= k){
            return n / arr[i];
        }
    }
    return n;
}

int main() { definitions(); fastIO

    ll n , k , T;cin >> T;
    vec < ll > div;
    while (T--){
        cin >> n >> k;
        div = divisors(n);
        cout << solve(k , n , div) << endl;
    }


return 0;}
