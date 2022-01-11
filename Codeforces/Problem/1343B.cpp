#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 4) {
            cout << "NO" << '\n';
        }
        else {
            cout << "YES" << '\n';
            for (ll i = 2; i <= n; i += 2) {
                cout << i << " ";
            }
            ll tmp = 1, cnt = 0;
            while (cnt < n / 2 - 1) {
                cout << tmp << " ";
                tmp += 2;
                cnt++;
            }
            cout << n + (n / 2) - 1 << '\n';
        }
    }
    return 0;
}