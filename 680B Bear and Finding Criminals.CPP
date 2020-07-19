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

int main() { definitions(); fastIO
    int arr[1005];
    bool impossible[1005];
        int n, a; cin >> n >> a;
        for(int i = 1; i <= n; ++i)
            cin >> arr[i];
        for(int i = 1; i <= n; ++i)
            for(int j = i + 1; j <= n; ++j)
                if(abs(i - a) == abs(j - a) && arr[i] != arr[j]) {
                    impossible[i] = impossible[j] = true;
                }
        int answer = 0;
        for(int i = 1; i <= n; ++i)
            if(arr[i] == 1 && !impossible[i])
                ++answer;
        cout << answer << endl;
    return 0;
}
