#include <bits/stdc++.h>
#define ll long long int
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
vector<pair<int , int >> possibilities;
vector<int> dp;
void all_possibilities(vector<int> arr , int n , int l , int r){
    //cout<< " Part 0 " << endl;
    while (r < arr.size()){
        //cout<<"l = "<<l<<' '<<"r = "<<r<<endl;

        if (arr[l] == arr[r] && arr[l] == n ){r++;}
        else if (r == arr.size() - 1 && (r - l >= 2 && arr[l] == n && arr[r] == n)) {possibilities.push_back(make_pair(l , r ));r++;}
        else if (arr[l] == arr[r]){l++;r++;}

        else{
            if (r - l > 1 && (arr[l]  == n && l != r)){possibilities.push_back(make_pair(l , r - 1));}
            l = r;}
    }
}
int solve_part_2(vector<int> arr ,int ans = 0 ){
    int l = 0 , r = 0;
    while (r < arr.size() ){
        if (arr[l] == arr[r]){r++;}

        else{

            if (r - l >= 3){
                arr.erase(arr.begin() + l , arr.begin() + r  );
                return solve_part_2(arr , ans + (r - l));
            }

            else{l = r;}
        }
        if ((r == arr.size() - 1) && (r - l >= 2) && arr[l] == arr[r]){ans += (r - l + 1);arr.erase(arr.begin() + l , arr.begin() + r + 1 );r++;}
    }
    return ans;
}
void solve_part_1(vector<int>arr , pair<int , int > p){
    //cout<< " Part 1 " << endl;
    int l = p.first , r = p.second;
    int ans = 0;
    vector<int>new_arr = arr;
    new_arr.erase(new_arr.begin() + l , new_arr.begin() + r + 1);
    ans += (r - l + 1);
    ans += solve_part_2(new_arr);
    dp.push_back(ans);
}

int main() {
    fastIO
    int n, k, x;
    int answer = 0;
    cin >> n >> k >> x;
    vector<int> arr;
    while (n--) {
        int i;
        cin >> i;
        arr.push_back(i);
    }
    all_possibilities(arr , x , 0 , 0);
    for (pair<int , int > i : possibilities){//cout<<i.first<<' '<<i.second<<endl;
        solve_part_1(arr , i);
    }
    for (int i : dp){if (i > answer){answer = i;}}
    cout << answer << endl;
    return 0;}
