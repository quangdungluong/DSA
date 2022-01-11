#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

ll n, s, x, y;
pair<ll, ll> p[1000];
bool c = true;
void solve() {
    cin >> s >> n;
    for (ll i = 0; i < n; i++) {
        cin >> x >> y;
        p[i].first = x;
        p[i].second = y;
    }
    sort(p, p + n);
    for (int i = 0; i < n; i++) {
        if (s <= p[i].first) {
            c = false;
            break;
        }
        s += p[i].second;
    }
    if (c) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    solve();
    return 0;
}