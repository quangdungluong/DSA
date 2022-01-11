#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, x;
void solve() {
    cin >> n;
    vector<int> a(5, 0);
    FOR(i, 0, n - 1) {
        cin >> x;
        a[x]++;
    }
    int ans = 0;
    ans += a[4];
    ans += a[3];
    a[1] -= min(a[1], a[3]);
    ans += a[2] / 2;
    a[2] = a[2] % 2;
    ans += a[1] / 4;
    a[1] = a[1] % 4;
    ans += ceil(float(a[1] + 2 * a[2]) / 4);
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}