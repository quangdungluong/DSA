#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n;
void solve() {
    cin >> n;
    int a[101] = { 0 };
    int m = 0;
    FOR(i, 0, n - 1) {
        cin >> t;
        m = max(m, t);
        FOR(j, 1, t) a[j]++;
    }
    FOR(i, 1, n) {
        int ans = 0;
        FOR(j, 1, m) {
            ans += (a[j] >= n + 1 - i);
        }
        cout << ans << " ";
    }
    cout << '\n';
}
int main() {
    solve();
    return 0;
}