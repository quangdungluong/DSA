#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
ll x, y, a, b;
void solve() {
    cin >> x >> y >> a >> b;
    if (2 * a < b) {
        cout << a * (x + y) << '\n';
    }
    else {
        ll m = min(x, y);
        cout << b * m + a * (x - m + y - m) << '\n';
    }
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}