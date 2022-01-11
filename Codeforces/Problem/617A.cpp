#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll x;
    cin >> x;
    ll ans = x / 5 + (x % 5 != 0);
    cout << ans << '\n';
    return 0;
}