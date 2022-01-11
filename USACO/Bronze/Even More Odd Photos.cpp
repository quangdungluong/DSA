#include <bits/stdc++.h>
using namespace std;

int n, x;
void solve(string i) {
    freopen((i + ".in").c_str(), "r", stdin);
    freopen((i + "_.out").c_str(), "w", stdout);
    int even = 0, odd = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2) odd++;
        else even++;
    }
    x = min(even, odd);
    int ans = 2 * x;
    even -= x;
    odd -= x;
    if (even) ans += 1;
    if (odd) {
        ans += (odd / 3) * 2;
        if (odd % 3 == 1) ans -= 1;
        else if (odd % 3 == 2) ans += 1;
    }
    cout << ans;

}
int main() {
    for (int i = 1; i <= 11; i++) {
        solve(to_string(i));
    }
}