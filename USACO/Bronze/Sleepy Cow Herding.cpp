#include <bits/stdc++.h>
using namespace std;

void solve(string idx) {
    freopen((idx + ".in").c_str(), "r", stdin);
    freopen((idx + "_.out").c_str(), "w", stdout);
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    int b = a[1] - a[0], c = a[2] - a[1];
    if (b == 1 && c == 1) {
        cout << "0\n0\n";
    }
    else if (b == 1 || c == 1) {
        cout << "2\n" << max(b, c) - 1 << '\n';
    }
    else {
        cout << min(2, min(b, c) - 1) << '\n' << max(b, c) - 1 << '\n';
    }
}
int main() {
    for (int i = 1; i <= 10; i++) {
        solve(to_string(i));
    }
}