// https://codeforces.com/contest/977/problem/F
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

int n;
int a[200001];
void solve() {
    int lst = 0, ans = 0;
    map<int, int> dp;
    for (int i = 0; i < n; i++) {
        int x = a[i];
        dp[x] = dp[x - 1] + 1;
        if (dp[x] > ans) {
            ans = dp[x];
            lst = x;
        }
    }
    vector<int> res;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == lst) {
            res.push_back(i + 1);
            lst--;
        }
    }
    reverse(all(res));
    cout << res.size() << '\n';
    for (auto x : res) cout << x << ' ';
}
int main() {
    IOS;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    solve();
    // system("pause");
    return 0;
}