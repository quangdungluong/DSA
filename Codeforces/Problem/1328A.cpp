#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a % b == 0) {
            cout << 0 << '\n';
        }
        else cout << (a / b + 1) * b - a << '\n';
    }
    return 0;
}