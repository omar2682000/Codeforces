#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test_cases , n , m ;
    cin>>test_cases;
    for (int test = 0 ; test < test_cases ; test++){
        cin>>n;
        vector<int> arr = {};
        for (int i = 0 ; i<n ; i++){
            cin>>m;
            arr.push_back(m);
        }
        sort(arr.begin() , arr.end());
        reverse(arr.begin() , arr.end());
        for (int i = 0 ; i<arr.size() ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        
    } 
    return 0;
}
