#include <bits/stdc++.h>
using namespace std;

int n, k, x, y;
void solve(string idx) {
    freopen((idx + ".in").c_str(), "r", stdin);
    freopen((idx + "_.out").c_str(), "w", stdout);
    cin >> n >> k;
    vector<int> a(n + 1, 0);
    for (int i = 0; i < k; i++) {
        cin >> x >> y;
        a[x]++;
        if (y != n) a[y + 1]--;
    }
    for (int i = 1; i <= n; i++) {
        a[i] += a[i - 1];
    }
    sort(a.begin() + 1, a.end());
    cout << a[n / 2 + 1];
}
int main() {
    for (int i = 1; i <= 10; i++) {
        solve(to_string(i));
    }
}