#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll t, a, b, n;
    cin >> t;
    while (t--) {
        cin >> a >> b >> n;
        if (a > b) swap(a, b);
        ll cnt = 0;
        while (b <= n) {
            cnt++;
            ll tmp = a;
            a = b;
            b += tmp;
        }
        cout << cnt << '\n';
    }
    return 0;
}