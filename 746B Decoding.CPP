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
map < char , int > sol;
map < int , char> final;
int main() { definitions(); fastIO
    string str;
    int n , mid;
    cin >> n ;
    cin >> str;
    vector < char > solution;
    for (int i = 0 ; i < str.length() ; i++){
        if ((str.length() - i) % 2)
            solution.push_back(str[i]);
        else solution.insert(solution.begin() , str[i]);
    }
    for (char i : solution) cout << i;
    return 0;
}
