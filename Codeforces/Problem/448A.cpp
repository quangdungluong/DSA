#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int a, b, c, d, e, f, n;
    cin >> a >> b >> c >> d >> e >> f >> n;
    if (ceil(float(a + b + c) / 5) + ceil(float(d + e + f) / 10) <= n) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}