#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, k, x;
void solve() {
    cin >> n >> k;
    vector<int> a(k, 0);
    FOR(i, 0, n - 1) {
        cin >> x;
        a[x % k]++;
    }
    int ans = (a[0] > 0) ? 1 : 0;
    int limit = (k % 2) ? k / 2 : k / 2 - 1;
    FOR(i, 1, limit) {
        ans += max(a[i], a[k - i]);
    }
    if (k % 2 == 0 && a[k / 2] > 0) ans++;
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}