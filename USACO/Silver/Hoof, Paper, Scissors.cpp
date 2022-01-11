#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
char c;
void solve(string idx) {
    freopen((idx + ".in").c_str(), "r", stdin);
    freopen((idx + "_.out").c_str(), "w", stdout);
    cin >> n;
    int h[n + 1] = { 0 }, p[n + 1] = { 0 }, s[n + 1] = { 0 };
    for (int i = 1; i <= n; i++) {
        cin >> c;
        h[i] = h[i - 1];
        p[i] = p[i - 1];
        s[i] = s[i - 1];
        if (c == 'H') h[i]++;
        if (c == 'P') p[i]++;
        if (c == 'S') s[i]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int a = max(h[i], max(p[i], s[i]));
        int b = max(h[n] - h[i], max(p[n] - p[i], s[n] - s[i]));
        ans = max(ans, a + b);
    }
    cout << ans;
}
int main() {
    for (int i = 1; i <= 10; i++) {
        solve(to_string(i));
    }
}