#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
ll n, x;
void solve() {
    cin >> n >> x;
    ll ans = 0;
    for (ll i = 1; i <= sqrt(x) && i <= n; i++) {
        if (x % i == 0 && max(i, x / i) <= n) {
            ans += (i == x / i) ? 1 : 2;
        }
    }
    cout << ans;
}
int main() {
    solve();
    return 0;
}