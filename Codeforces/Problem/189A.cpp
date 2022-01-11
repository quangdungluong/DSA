#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, a, b, c;

void solve() {
    cin >> n >> a >> b >> c;
    int dp[n + 1];
    memset(dp, 0, sizeof(dp));
    FOR(i, 0, n) {
        if (dp[i] == 0 && i != 0) continue;
        if (i + a <= n) dp[i + a] = max(dp[i + a], 1 + dp[i]);
        if (i + b <= n) dp[i + b] = max(dp[i + b], 1 + dp[i]);
        if (i + c <= n) dp[i + c] = max(dp[i + c], 1 + dp[i]);
    }
    cout << dp[n] << '\n';
}
int main() {
    solve();
    return 0;
}