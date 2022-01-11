#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < m - 1; i++) {
            if (a[n - 1][i] == 'D') cnt++;
        }
        for (int i = 0; i < n - 1; i++) {
            if (a[i][m - 1] == 'R') cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}