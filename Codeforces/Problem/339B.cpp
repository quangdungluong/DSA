#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (ll i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

ll t;
ll n, m;
void solve() {
    cin >> n >> m;
    vector<ll> a;
    FOR(i, 0, m - 1) {
        cin >> t;
        if (a.empty()) a.push_back(t);
        else {
            if (t != a[sz(a) - 1]) a.push_back(t);
        }
    }
    ll curr = 1, time = 0;
    FOR(i, 0, sz(a) - 1) {
        if (a[i] >= curr) {
            time += a[i] - curr;
        }
        else {
            time += a[i] + n - curr;
        }
        curr = a[i];
    }
    cout << time << '\n';
}
int main() {
    solve();
    return 0;
}