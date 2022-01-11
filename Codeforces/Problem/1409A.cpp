#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        ll tmp = abs(a - b);
        if (tmp % 10) cout << tmp / 10 + 1 << '\n';
        else cout << tmp / 10 << '\n';
    }
    return 0;
}