#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, m;
vector<int> solve(vector<int> a, vector<int> b, int n, int m) {
    int dp[n + 1][m + 1];
    //dp[i][j]: lcs of a[0..i-1] and b[0..j-1]
    FOR(i, 0, n) {
        FOR(j, 0, m) {
            if (i == 0 || j == 0) dp[i][j] = 0;
            else if (a[i - 1] == b[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    int len = dp[n][m];
    vector<int> res(len);
    int i = n, j = m;
    while (i && j) {
        if (a[i - 1] == b[j - 1]) {
            res[--len] = a[i - 1];
            i--;
            j--;
        }
        else {
            if (dp[i - 1][j] > dp[i][j - 1]) i--;
            else j--;
        }
    }
    return res;
}
int main() {
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    FOR(i, 0, n - 1) cin >> a[i];
    FOR(i, 0, m - 1) cin >> b[i];
    vector<int> res = solve(a, b, n, m);
    FOR(i, 0, res.size() - 1) cout << res[i] << " ";
    return 0;
}