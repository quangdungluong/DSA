#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];
        ll i = 0, j = n - 1;
        while (i < j) {
            cout << a[i++] << " " << a[j--] << " ";
        }
        if (i == j) cout << a[i];
        cout << '\n';
    }
    return 0;
}