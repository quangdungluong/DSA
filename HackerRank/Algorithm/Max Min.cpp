#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, k;
void solve() {
    cin >> n >> k;
    vector<int> a(n);
    FOR(i, 0, n - 1) cin >> a[i];
    sort(all(a));
    int ans = INT_MAX;
    FOR(i, 0, n - k) {
        ans = min(ans, a[i + k - 1] - a[i]);
        if (ans == 0) break;
    }
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}