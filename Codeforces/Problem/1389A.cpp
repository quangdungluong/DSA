#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll t, l, r;
    cin >> t;
    while (t--) {
        cin >> l >> r;
        if (l * 2 <= r) cout << l << " " << l * 2 << '\n';
        else cout << -1 << " " << -1 << '\n';
    }
    return 0;
}