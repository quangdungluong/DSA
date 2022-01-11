// https://cses.fi/problemset/task/1746
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

const int mod = 1e9 + 7;
int n, m;
int a[100001];
int solve() {
    // dp[i][v]: number of ways to fill the array up to index i, if a[i]==v
    int dp[n][m + 1];
    memset(dp, 0, sizeof(dp));
    if (a[0] == 0) {
        for (int i = 1; i <= m; i++) dp[0][i] = 1;
    }
    else dp[0][a[0]] = 1;
    for (int i = 1; i < n; i++) {
        if (a[i]) {
            for (int j = max(1, a[i] - 1); j <= min(a[i] + 1, m); j++) {
                dp[i][a[i]] = (dp[i][a[i]] + dp[i - 1][j]) % mod;
            }
        }
        else {
            for (int j = 1; j <= m; j++) {
                for (int k = max(1, j - 1); k <= min(m, j + 1); k++) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][k]) % mod;
                }
            }
        }
    }
    int res = 0;
    for (int i = 1; i <= m; i++) {
        res = (res + dp[n - 1][i]) % mod;
    }
    return res;
}
int main() {
    IOS;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << solve();
    // system("pause");
    return 0;
}