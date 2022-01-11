#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, k, b, a;
void solve(string idx) {
    freopen((idx + ".in").c_str(), "r", stdin);
    freopen((idx + "_.out").c_str(), "w", stdout);
    cin >> n >> k >> b;
    int status[n + 1] = { 0 }, prefix[n + 1] = { 0 };
    for (int i = 0; i < b; i++) {
        cin >> a;
        status[a] = 1;
    }
    for (int i = 1; i <= n; i++) prefix[i] = prefix[i - 1] + status[i];
    int ans = k;
    for (int i = k; i <= n; i++) {
        ans = min(ans, prefix[i] - prefix[i - k]);
    }
    cout << ans << '\n';
}
int main() {
    for (int i = 1; i <= 11; i++) {
        solve(to_string(i));
    }
}