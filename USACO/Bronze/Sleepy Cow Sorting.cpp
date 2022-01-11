#include <bits/stdc++.h>
using namespace std;

int n;
void solve(string idx) {
    freopen((idx + ".in").c_str(), "r", stdin);
    freopen((idx + "_.out").c_str(), "w", stdin);
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] > a[i + 1]) {
            ans = i + 1;
            break;
        }
    }
    cout << ans;
}
int main() {
    for (int i = 1; i <= 12; i++) {
        solve(to_string(i));
    }
}