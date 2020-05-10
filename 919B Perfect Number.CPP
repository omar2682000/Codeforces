#include<bits/stdc++.h>
using namespace std;
#define ll long long int;

ll sum(ll n){
    ll s=0
    while (n>0 and s<11){
        s+=(n%10)
        n=n//10}
    return s;
}


int main(){
ll i = 19 , c = 0;
ll n ; scanf("%lld" , &n);
while (true){
    if (sum(i) == 10){c++;}
    if (c == n){printf("%lld" , i);break;}
    i += 9;
}
return 0;
}
