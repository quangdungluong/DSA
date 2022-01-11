#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll t, m, n;
    cin >> t;
    while (t--) {
        cin >> m >> n;
        if (m % n) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}