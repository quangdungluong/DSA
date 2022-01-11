// https://leetcode.com/problems/longest-common-subsequence/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

int longestCommonSubsequence(string text1, string text2) {
    // "abdce" "ace" -> 3
    int n = text1.size(), m = text2.size();
    int dp[n + 1][m + 1];
    // dp[i][j]: LCS using 0...i-1 and 0...j-1 character
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0) dp[i][j] = 0;
            else {
                if (text1[i - 1] == text2[j - 1]) dp[i][j] = 1 + dp[i - 1][j - 1];
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}

int main() {
    // IOS;
    string a, b;
    cin >> a >> b;
    cout << longestCommonSubsequence(a, b);
    system("pause");
    return 0;
}
