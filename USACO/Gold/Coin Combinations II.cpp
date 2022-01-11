// https://cses.fi/problemset/task/1636
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
    vector<int> dp(x + 1);
    dp[0] = 1;
    for (auto i : a) {
        for (int j = i; j <= x; j++) {
            dp[j] = (dp[j] + dp[j - i]) % d;
        }
    }
    cout << dp[x] << '\n';
    // system("pause");
    return 0;
}