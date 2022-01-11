// https://cses.fi/problemset/task/1638
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

const int mod = 1e9 + 7;
int n;
string row;
vector<string> v;
int solve() {
    // only move right or down
    int dp[n][n];
    memset(dp, 0, sizeof(dp));
    // dp[i][j]: number of ways to reach to cell [i,j]
    if (v[0][0] == '.') dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] == '.') {
                if (i) dp[i][j] = (dp[i][j] + dp[i - 1][j]) % mod;
                if (j) dp[i][j] = (dp[i][j] + dp[i][j - 1]) % mod;
            }
        }
    }
    return dp[n - 1][n - 1];
}
int main() {
    IOS;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> row;
        v.push_back(row);
    }
    cout << solve();
    // system("pause");
    return 0;
}