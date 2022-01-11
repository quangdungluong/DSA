#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
ll l1, r1, l2, r2, a, b;
void solve() {
    cin >> l1 >> r1 >> l2 >> r2;
    if (l1 < l2) cout << l1 << " " << r2;
    else cout << r1 << " " << l2;
    cout << '\n';
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}