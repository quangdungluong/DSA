#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int prev[n] = { 0 }, after[n] = { 0 };
    for (int i = 1; i < n; i++) {
        prev[i] = __gcd(prev[i - 1], a[i - 1]);
    }
    for (int i = n - 2; i >= 0; i--) {
        after[i] = __gcd(a[i + 1], after[i + 1]);
    }
    int ans = 1;
    for (int i = 0; i < n; i++) {
        ans = max(ans, __gcd(prev[i], after[i]));
    }
    cout << ans << '\n';
    return 0;
}