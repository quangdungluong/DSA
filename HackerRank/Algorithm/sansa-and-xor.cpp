#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n;
void solve() {
    cin >> n;
    vector<int> a(n);
    FOR(i, 0, n - 1) cin >> a[i];
    if (n % 2) {
        int ans = a[0];
        for (int i = 2; i < n; i += 2) {
            ans ^= a[i];
        }
        cout << ans << '\n';
    }
    else cout << 0 << '\n';
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}