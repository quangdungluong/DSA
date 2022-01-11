#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll k, n, w;
    cin >> k >> n >> w;
    ll cost = (w + 1) * w / 2 * k;
    if (cost < n) cout << 0 << '\n';
    else cout << cost - n << '\n';
    return 0;
}