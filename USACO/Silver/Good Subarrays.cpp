#include <bits/stdc++.h>
using namespace std;

int t, n;
string s;
void solve() {
    cin >> n >> s;
    map<int, long long> mp;
    mp[0] = 1;
    int cur = 0;
    for (int i = 1; i <= n; i++) {
        int j = s[i - 1] - '0';
        cur += j;
        mp[cur - i]++;
    }
    long long ans = 0;
    for (auto p : mp) {
        ans += (p.second - 1) * p.second / 2;
    }
    cout << ans << '\n';
}
int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    return 0;
}