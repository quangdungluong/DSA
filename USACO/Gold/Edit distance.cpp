// https://cses.fi/problemset/task/1639
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

string a, b;
int solve() {
    int n = a.size(), m = b.size();
    int dp[n + 1][m + 1];
    // dp[i][j]: edit distance of a[0..i-1] and b[0..j-1]
    dp[0][0] = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0) dp[i][j] = abs(i - j);
            else {
                if (a[i - 1] == b[j - 1]) dp[i][j] = dp[i - 1][j - 1];
                else {
                    dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
                }
            }
        }
    }
    return dp[n][m];
}
int main() {
    IOS;
    cin >> a >> b;
    cout << solve();
    // system("pause");
    return 0;
}