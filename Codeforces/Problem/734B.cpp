#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;
    ll tmp = min(k2, min(k5, k6));
    k2 -= tmp;
    ll tmp2 = min(k2, k3);
    cout << tmp * 256 + tmp2 * 32 << '\n';
    return 0;
}