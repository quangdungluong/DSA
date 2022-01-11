#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        ll ans = (n * m % 2) ? (n * m / 2 + 1) : (n * m / 2);
        cout << ans << '\n';
    }
    return 0;
}