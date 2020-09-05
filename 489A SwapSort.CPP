#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
set<pair<int,int>> swapd;
vector<int> arr;
int main() {
    int n; cin >> n;
    int k; for (int i=0;i<n;i++){cin>>k;arr.pb(k);}
    for (int i = 0 ; i < n ; i++){
        int piv = arr[i], idx = i;
        for (int j = i + 1 ; j < n ; j++){
            if (arr[j] < piv){
                piv = arr[j];idx = j;

            }
        }	if (i!=idx) { iter_swap(arr.begin() + i,arr.begin() + idx);swapd.emplace(make_pair(i, idx)); }
    } cout << swapd.size() << endl;
    for(auto i : swapd)cout << i.first << ' ' << i.second << endl;

}
/*
 * 1 2 5 5 4
 * 1 2 4 5 5
 *
 *
 * */
