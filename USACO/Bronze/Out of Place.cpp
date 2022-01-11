#include <bits/stdc++.h>
using namespace std;

int n;
int a[100], b[100];
void solve(string idx) {
    freopen((idx + ".in").c_str(), "r", stdin);
    freopen((idx + "_.out").c_str(), "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) ans++;
    }
    cout << ans - 1 << '\n';
}
int main() {
    for (int idx = 1; idx <= 10; idx++) {
        solve(to_string(idx));
    }
}