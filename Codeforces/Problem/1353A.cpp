#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        if (n == 1) cout << 0 << '\n';
        else if (n == 2) cout << m << '\n';
        else cout << 2 * m << '\n';
    }
    return 0;
}