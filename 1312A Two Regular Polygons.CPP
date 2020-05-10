#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_cases , n , m;
    cin>>test_cases;
    for (int test = 0 ; test < test_cases ; test ++){
        cin>>n>>m;
        if (n%m == 0 && n>= m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
