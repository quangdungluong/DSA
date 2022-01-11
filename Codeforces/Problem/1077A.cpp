#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, a, b, k, pos;
    cin >> t;
    while (t--) {
        cin >> a >> b >> k;
        if (k % 2) {
            cout << a + (k - 1) / 2 * (a - b) << '\n';
        }
        else cout << k * (a - b) / 2 << '\n';
    }
    return 0;
}