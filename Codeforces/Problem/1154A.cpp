#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll a, b, c, d, m = 0;
    cin >> a >> b >> c >> d;
    m = max(m, max(a, max(b, max(c, d))));
    if (m != a) cout << m - a << " ";
    if (m != b) cout << m - b << " ";
    if (m != c) cout << m - c << " ";
    if (m != d) cout << m - d << " ";
    return 0;
}