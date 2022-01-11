#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, x, y;
void solve() {
    cin >> x >> y;
    if (abs(x - y) > 1) {
        if (x > y) swap(x, y);
        cout << 1 + 2 * (y - 1) << '\n';
    }
    else cout << x + y << '\n';
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}