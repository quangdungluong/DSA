#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        ll cnt = 0, minCandies = INT_MAX, minOrange = INT_MAX;
        vector<ll> a(n);
        vector<ll> b(n);
        for (ll i = 0;i < n; i++) {
            cin >> a[i];
            minCandies = min(a[i], minCandies);
        }
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            minOrange = min(b[i], minOrange);
        }
        for (ll i = 0; i < n; i++) {
            ll x = a[i] - minCandies;
            ll y = b[i] - minOrange;
            cnt += max(x, y);
        }
        cout << cnt << '\n';
    }
    return 0;
}