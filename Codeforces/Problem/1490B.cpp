#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        ll c0 = 0, c1 = 0, c2 = 0, a, cnt = 0;
        for (ll i = 0; i < n; i++) {
            cin >> a;
            if (a % 3 == 0) c0++;
            if (a % 3 == 1) c1++;
            if (a % 3 == 2) c2++;
        }
        if (c0 != n / 3) {
            ll tmp = abs(c0 - n / 3);
            if (c0 > n / 3) {
                c1 += tmp;
            }
            else {
                c2 -= tmp;
            }
            c0 = n / 3;
            cnt += tmp;
        }
        if (c1 != n / 3) {
            if (c1 > n / 3) {
                cnt += c1 - n / 3;
            }
            else {
                cnt += 2 * (n / 3 - c1);
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}