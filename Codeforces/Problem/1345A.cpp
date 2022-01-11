#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll t, a, b;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if ((a == 2 && b == 2) || (a == 1 || b == 1)) {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
    return 0;
}