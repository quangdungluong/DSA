#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll n;
    cin >> n;
    vector<int> a(n + 1, 1);
    a[0] = a[1] = 1;
    for (ll i = 2; i * i <= n;i++) {
        if (a[i]) {
            for (ll j = i * i; j <= n; j += i) {
                a[j] = 0;
            }
        }
    }
    for (ll i = 4; i <= n / 2; i++) {
        if (a[i] == 0 && a[n - i] == 0) {
            cout << i << " " << n - i;
            break;
        }
    }
    return 0;
}