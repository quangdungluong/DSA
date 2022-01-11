#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

ll x;
void solve() {
    cin >> x;
    ll ans = 0;
    while (x) {
        if (x % 2) ans++;
        x /= 2;
    }
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}