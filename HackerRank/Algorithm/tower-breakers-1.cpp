#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n, m;
void solve() {
    cin >> n >> m;
    if (n % 2 && m != 1) cout << 1 << '\n';
    else cout << 2 << '\n';
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}