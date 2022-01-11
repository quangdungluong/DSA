#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

ll n, a, b, k;
int m;
void solve() {
    cin >> n >> m;
    map<ll, ll> mp;
    FOR(i, 0, m - 1) {
        cin >> a >> b >> k;
        mp[a] += k;
        if (b != n) mp[b + 1] -= k;
    }
    ll tmp = 0, ans = 0;
    for (auto x : mp) {
        tmp += x.second;
        ans = max(ans, tmp);
    }
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}