#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int q, n;
void solve() {
    cin >> n;
    vector<vector<int>> a(2 * n);
    FOR(i, 0, 2 * n - 1) {
        a[i].resize(2 * n);
        FOR(j, 0, 2 * n - 1) {
            cin >> a[i][j];
        }
    }
    int ans = 0;
    FOR(i, 0, n - 1) {
        FOR(j, 0, n - 1) {
            ans += max(a[i][j], max(a[2 * n - i - 1][j], max(a[i][2 * n - j - 1], a[2 * n - i - 1][2 * n - j - 1])));
        }
    }
    cout << ans << '\n';
}
int main() {
    cin >> q;
    while (q--)
        solve();
    return 0;
}