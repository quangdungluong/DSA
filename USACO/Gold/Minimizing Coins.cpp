// https://cses.fi/problemset/task/1634
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

int main() {
    IOS;
    int n, x; cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    vector<int> dp(x + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= x; i++) {
        for (auto j : a) {
            if (j > i) break;
            dp[i] = min(dp[i], 1 + dp[i - j]);
        }
    }
    if (dp[x] == 1e9) cout << "-1\n";
    else cout << dp[x] << '\n';
    // system("pause");
    return 0;
}