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
int greatest_divisor(int n){
    int result = 1;
    for (int i = 2 ; i * i <= n ; i++)
        if (n % i == 0)
            result = max({i , n / i , result});
    return result;
}
int main() { definitions(); fastIO
    int T , n; cin >> T;
    while (T--){
        cin >> n;
        int answer = greatest_divisor(n);
        cout << answer << ' ' << n - answer << endl;
    }
    return 0;
/* The idea is when U think in LCM, U should know that [ a * b = LCM(a , b) * GCD(a , b) ],
    deviding both sides with GCD(a , b), now the problem becomes easier to analyze, all U have to do 
      is to maximize GCD(a , b), hint --> max(a , b) should be divisible by min(a , b), and min(a , b) is 
        the greatest divisor for max(a , b).
*/ 
}
