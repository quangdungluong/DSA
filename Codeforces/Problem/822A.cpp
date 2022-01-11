#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll a, b;
    cin >> a >> b;
    a = min(a, b);
    ll ans = 1;
    for (int i = 2; i <= a; i++) ans *= i;
    cout << ans << '\n';
    return 0;
}