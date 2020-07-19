#include <bits/stdc++.h>
void definitions(){
#define ll long long
#define vec vector
#define dl double
#define rep(begin , limit , operation) for (int i = begin ; i < limit ; i += operation)
#define array_input(array , size) for (int i = 0 ; i < size ; ++i)cin >> array[i];
#define matrix_input(matrix , row , col) for (int i = 0 ; i < row ; ++i) for (int j = 0 ; j < col ; ++j) cin >> matrix[i][j];
#define Identity_matrix(matrix , n) for (int row = 0 ; row < n ; ++row) for (int col = 0 ; col < n ; ++col) if (row == col) matrix[row][col] = 1; else matrix[row][col] = 0;
#define Zero_matrix(matrix , n) for (int row = 0 ; row < n ; ++row) for (int col = 0 ; col < n ; ++col) matrix[row][col] = 0;
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
const int N = 1e5 + 5;
ll arr[N];
map < int , pair < ll , ll > > solution;
int main() { definitions(); fastIO
    ll n , ans1 = 0 , ans2 = 0; cin >> n;
    array_input(arr , n)
    for (int i = 0 ; i < n ; i++)
        solution[arr[i]].first = i + 1;
    for (int i = n - 1 ; i >= 0 ; i--)
        solution[arr[i]].second = (n - i);
    int m; cin >> m;
    while (m--){
        ll q; cin >> q;
        ans1 += solution[q].first ; ans2 += solution[q].second ;
    }
    cout << ans1 << ' ' << ans2 << endl;
    return 0;
}
