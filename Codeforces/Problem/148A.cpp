#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int a[d + 1] = { 0 };
    ll cnt = 0;
    for (ll i = k;i <= d;i += k) {
        cnt += (!a[i]++);
    }
    for (ll i = l;i <= d;i += l) {
        cnt += (!a[i]++);
    }
    for (ll i = m;i <= d;i += m) {
        cnt += (!a[i]++);
    }
    for (ll i = n;i <= d;i += n) {
        cnt += (!a[i]++);
    }
    cout << cnt;
    return 0;
}