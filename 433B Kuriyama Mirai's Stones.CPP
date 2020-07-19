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
ll  sum1[N] , sum2[N];
ll calc(ll arr[] , ll l , ll r){
    return arr[r] - arr[l - 1];
}
int main() { definitions(); fastIO
    ll n , l , r , m , q , arr[N]  , e , sorted[N]; cin >> n;
    for (int i = 0 ; i < n ; i++) { cin >> e; arr[i] = e; sorted[i] = e; }
    sort(sorted , sorted + n);
    sum1[0] = 0; sum2[0] = 0;
    cin >> m;
    for (int i = 1 ; i <= n ; i++){
        sum1[i] = sum1[i - 1] + arr[i - 1];
        sum2[i] = sum2[i - 1] + sorted[i - 1];
    }

    for (int i = 0 ; i < m ; i++){
        cin >> q >> l >> r;
        if (q == 1) cout << calc(sum1 , l , r) << endl; else cout << calc(sum2 , l , r) << endl;
    }

    return 0;
}
