#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

ll t, n, m;
void solve() {
    cin >> n >> m;
    vector<int> a(n);
    int sum = 0;
    FOR(i, 0, n - 1) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum == m) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}