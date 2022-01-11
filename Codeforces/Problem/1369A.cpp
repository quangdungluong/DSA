#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n < 4) cout << "NO\n";
        else {
            if (n % 4) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    return 0;
}