#include<bits/stdc++.h>
using namespace std;
int i, k, m, n, t, a[60];
int main() {
    cin >> t; while (t--) {
        cin >> n;
        for (i = k = m = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] & 1)++m;
        }
        sort(a, a + n);
        for (int i = 1; i < n; ++i) {
            if (a[i] - a[i - 1] == 1)++k;
        }
        if (m & 1 && !k)cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}
