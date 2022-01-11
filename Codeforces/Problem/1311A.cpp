#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll t, a, b, ans;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if (a % 2 == b % 2) {
            ans = (a > b) ? 1 : 2;
        }
        else ans = (a > b) ? 2 : 1;
        if (a == b) ans = 0;
        cout << ans << "\n";
    }
    return 0;
}