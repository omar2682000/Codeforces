#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <string>
#include <array>
#include <map>
#include <iterator>
#include <algorithm>
#include <stack>
#include <queue>
#include <deque>
#include <search.h>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <numeric>
#include <bitset>
#include <sstream>
#include <stdio.h>
#include <set>
#define ll long long int
int _gcd(ll a,ll  b)
{
    if (a == 0) { return b; }
    return _gcd(b % a, a);
}
using namespace std;
int main()
{
    ll e,ans = 0 ;
    vector<ll>arr;
    ll n ;scanf("%lld" , &n);
    for (int i = 0 ; i< n ; i++){
        scanf("%lld" , &e);
        arr.push_back(e);
    }
    sort(arr.begin() , arr.end());ll piv = arr[n - 1];
    for (int i = n - 1 ; i>= 0 ; i--){
        piv = __gcd(arr[i] , piv);
    }
    if (piv == 1){ans = 1;}
    else{
        for (ll i = 1 ; i * i <= piv ; i++){
            if (piv%i==0) {
                ans++;
                if (piv/i != i){ans++;}
            }
        }
    }
printf("%lld" , ans);

}
