#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, x, y, a, b;
    cin >> t;
    while (t--) {
        cin >> x >> y >> a >> b;
        if ((y - x) % (a + b)) cout << "-1\n";
        else cout << (y - x) / (a + b) << '\n';
    }
    return 0;
}