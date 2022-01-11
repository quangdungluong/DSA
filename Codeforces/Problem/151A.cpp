#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int a = k * l / (n * nl);
    int b = c * d / n;
    int z = p / (n * np);
    cout << min(a, min(b, z)) << '\n';
    return 0;
}