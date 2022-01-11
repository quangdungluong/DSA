#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        if (a[0] + a[1] <= a[n - 1]) {
            cout << "1 2 " << n << '\n';
        }
        else {
            cout << -1 << '\n';
        }
    }
    return 0;
}