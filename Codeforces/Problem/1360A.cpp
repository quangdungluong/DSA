#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a < b) swap(a, b);
        if (b * 2 > a) cout << 4 * b * b << '\n';
        else cout << a * a << '\n';
    }
    return 0;
}