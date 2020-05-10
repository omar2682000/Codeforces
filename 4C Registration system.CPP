#include <iostream>
#include <vector> 
#include <array>
#include<map>
using namespace std;
map<string , int> arr;
int main()
{
    string s;
    int n ;
    cin>>n;
    for (int i = 0 ; i<n ; i++){
        cin>>s;
        if (arr[s] >0){
            cout<<s<<arr[s]<<endl;
            arr[s]++;
        }
        else{
            cout<<"OK"<<endl;
            arr[s]++;
        }
    }
}
