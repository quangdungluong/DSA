#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
const int m = 1000001;
void solve() {
    cin >> n;
    vector<int> b(m + 1, 1);
    b[0] = b[1] = 0;
    for (int p = 2; p * p <= m; p++) {
        if (b[p]) {
            for (int i = p * p; i <= m; i += p) b[i] = 0;
        }
    }
    vector<ll> a(n);
    FOR(i, 0, n - 1) {
        cin >> a[i];
        ll tmp = sqrt(a[i]);
        if (tmp * tmp == a[i] && b[tmp]) cout << "YES\n";
        else cout << "NO\n";
    }
}
int main() {
    solve();
    return 0;
}