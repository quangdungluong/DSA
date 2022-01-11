// https://cses.fi/problemset/task/1093
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

const int mod = 1e9 + 7;
int solve(int n) {
    if (n % 4 != 0 && n % 4 != 3) return 0;
    int s = n * (n + 1) / 4;
    int dp[s + 1] = { 0 };
    dp[0] = 1;
    for (int i = 1; i < n; i++) {
        for (int j = s; j >= i; j--) {
            dp[j] = (dp[j] + dp[j - i]) % mod;
        }
    }
    return dp[s];

}
int main() {
    IOS;
    int n; cin >> n;
    cout << solve(n);
    // system("pause");
    return 0;
}