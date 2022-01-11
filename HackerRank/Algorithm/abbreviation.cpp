#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int q;
string a, b;
bool solve(string a, string b) {
    int n = sz(a), m = sz(b);
    bool dp[n + 1][m + 1];
    //dp[i][j] check a[0..i-1] and b[0..j-1]
    memset(dp, false, sizeof(dp));
    dp[0][0] = true;
    FOR(i, 0, n) {
        FOR(j, 0, m) {
            if (j == 0 && i != 0) {
                if (a[i - 1] >= 'a' && a[i - 1] <= 'z' && dp[i - 1][j]) dp[i][j] = true;
            }
            else if (j && i) {
                if (a[i - 1] == b[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                if (a[i - 1] >= 'a' && a[i - 1] <= 'z') {
                    dp[i][j] = dp[i - 1][j];
                    if (toupper(a[i - 1]) == b[j - 1]) {
                        dp[i][j] = dp[i - 1][j - 1] || dp[i - 1][j];
                    }
                }
            }
        }
    }
    return dp[n][m];
}
int main() {
    cin >> q;
    while (q--) {
        cin >> a >> b;
        if (solve(a, b)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}