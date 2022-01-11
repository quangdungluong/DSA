#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

bool solve(ll x) {
    for (ll i = 1; i <= cbrt(x); i++) {
        ll a = cbrt(x - pow(i, 3));
        if (pow(a, 3) + pow(i, 3) == x && a) return true;
    }
    return false;
}
int main() {
    int t;
    ll x;
    cin >> t;
    while (t--) {
        cin >> x;
        if (solve(x)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}