// https://cses.fi/problemset/task/1158
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

int main() {
    IOS;
    int n, x; cin >> n >> x;
    int h[n], s[n];
    for (int i = 0; i < n; i++) cin >> h[i];
    for (int i = 0; i < n; i++) cin >> s[i];
    int dp[x + 1] = { 0 };
    for (int i = 0; i < n; i++) {
        for (int j = x; j >= h[i]; j--) {
            dp[j] = max(dp[j], s[i] + dp[j - h[i]]);
        }
    }
    cout << dp[x] << '\n';
    // system("pause");
    return 0;
}