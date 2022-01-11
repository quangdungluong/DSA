// https://cses.fi/problemset/task/1635
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

const int d = 1e9 + 7;
int main() {
    IOS;
    int n, x; cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    vector<int> dp(x + 1);
    dp[0] = 1;
    for (int i = 1; i <= x; i++) {
        for (auto j : a) {
            if (j > i) break;
            dp[i] = (dp[i] + dp[i - j]) % d;
        }
    }
    cout << dp[x] << '\n';
    // system("pause");
    return 0;
}