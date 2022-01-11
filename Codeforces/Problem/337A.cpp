#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
int n, m;
void solve() {
    cin >> n >> m;
    vector<int> a(m);
    FOR(i, 0, m - 1) cin >> a[i];
    sort(all(a));
    int ans = INT_MAX;
    FOR(i, 0, m - n) {
        ans = min(ans, a[i + n - 1] - a[i]);
        if (ans == 0) break;
    }
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}