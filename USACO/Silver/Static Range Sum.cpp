#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, q, l, r;
ll a[500001];
int main() {
    cin >> n >> q;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (int i = 0; i < q; i++) {
        cin >> l >> r;
        cout << a[r] - a[l] << '\n';
    }
    return 0;
}