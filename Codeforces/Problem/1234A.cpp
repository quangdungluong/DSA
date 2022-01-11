#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll t, n, a;
    cin >> t;
    while (t--) {
        cin >> n;
        ll cost = 0;
        for (ll i = 0; i < n; i++) {
            cin >> a;
            cost += a;
        }
        if (cost % n) cout << cost / n + 1 << '\n';
        else cout << cost / n << '\n';
    }
    return 0;
}