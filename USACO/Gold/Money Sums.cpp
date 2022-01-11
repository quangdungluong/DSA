// https://cses.fi/problemset/task/1745
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

int main() {
    IOS;
    int n, s = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        s += a[i];
    }
    int dp[s + 1] = { 0 };
    dp[0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = s; j >= a[i]; j--) {
            dp[j] = dp[j] | dp[j - a[i]];
        }
    }
    vector<int> res;
    for (int i = 1; i <= s; i++) {
        if (dp[i]) res.push_back(i);
    }
    cout << res.size() << '\n';
    for (auto x : res) cout << x << ' ';
    // system("pause");
    return 0;
}