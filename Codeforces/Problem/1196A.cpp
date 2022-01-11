#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll q, a, b, c;
    cin >> q;
    while (q--) {
        cin >> a >> b >> c;
        cout << (a + b + c) / 2 << '\n';
    }
    return 0;
}