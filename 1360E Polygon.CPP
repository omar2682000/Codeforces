#include<bits/stdc++.h>
using namespace std;
const int N = 50;
int arr[N][N];

int main() {
   int T; cin >> T;	int n;
   while (T--){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < n; ++j) {
        char c;
        cin >> c;
        arr[i][j] = c - '0';
      }
    }

    bool ans = 1;
    for (int i = n - 2; i >= 0; --i) {
      for (int j = n - 2; j >= 0; --j) {
        if (arr[i][j] && !arr[i + 1][j] && !arr[i][j + 1]) {
          ans = 0;
        }
      }
    }

    if (ans) cout << "YES\n"; else cout << "NO\n";
  }
}
