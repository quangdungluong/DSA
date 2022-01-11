#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, l;
void solve() {
    cin >> n >> l;
    vector<int> a(n);
    FOR(i, 0, n - 1) cin >> a[i];
    sort(all(a));
    int x = a[0] - 0;
    int y = l - a[n - 1];
    int z = 0;
    FOR(i, 0, n - 2) {
        z = max(z, a[i + 1] - a[i]);
    }
    x = max(2 * x, max(2 * y, z));
    cout << setprecision(10) << float(x) / 2 << '\n';
}
int main() {
    solve();
    return 0;
}