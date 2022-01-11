#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    ll cnt = 1, begin = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i - 1]) {
            cnt = max(cnt, i - begin);
            begin = i;
        }
    }
    if (begin != n - 1) {
        cnt = max(cnt, n - begin);
    }
    cout << cnt << '\n';
    return 0;
}