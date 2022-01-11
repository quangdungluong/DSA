#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, x, y, n;
    cin >> t;
    while (t--) {
        cin >> x >> y >> n;
        ll tmp = n / x;
        tmp = (tmp * x + y <= n) ? tmp * x + y : (tmp - 1) * x + y;
        cout << tmp << '\n';
    }
    return 0;
}