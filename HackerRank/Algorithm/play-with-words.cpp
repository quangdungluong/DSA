#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int n = s.size();
    vector<vector<int>> dp(n);
    //dp[i][j]: lps of s[i..j]
    for (int i = 0; i < n; i++) {
        dp[i].resize(n);
        dp[i][i] = 1;
    }
    for (int cl = 2; cl <= n; cl++) {
        for (int i = 0; i < n - cl + 1; i++) {
            int j = i + cl - 1;
            if (cl == 2 && s[i] == s[j]) dp[i][j] = 2;
            else if (s[i] == s[j]) dp[i][j] = 2 + dp[i + 1][j - 1];
            else dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    }
    int ans = 0;
    for (int i = 1; i < n; i++) {
        ans = max(ans, dp[0][i - 1] * dp[i][n - 1]);
    }
    cout << ans << endl;
    return 0;
}