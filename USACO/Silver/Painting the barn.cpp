#include <bits/stdc++.h>
using namespace std;

int n, k, xa, ya, xb, yb;
void solve(string idx) {
    freopen((idx + ".in").c_str(), "r", stdin);
    freopen((idx + "_.out").c_str(), "w", stdout);
    cin >> n >> k;
    vector<vector<int>> a(1001, vector<int>(1001, 0));
    for (int i = 0; i < n;i++) {
        cin >> xa >> ya >> xb >> yb;
        a[xa][ya]++;
        a[xa][yb]--;
        a[xb][ya]--;
        a[xb][yb]++;
    }
    int ans = 0;
    for (int i = 0; i < 1000; i++) {
        for (int j = 0; j < 1000; j++) {
            if (i) a[i][j] += a[i - 1][j];
            if (j) a[i][j] += a[i][j - 1];
            if (i && j) a[i][j] -= a[i - 1][j - 1];
            ans += a[i][j] == k;
        }
    }
    cout << ans << '\n';
}
int main() {
    for (int i = 1; i <= 10; i++) {
        solve(to_string(i));
    }
}