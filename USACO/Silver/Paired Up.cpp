// http://www.usaco.org/index.php?page=viewproblem2&cpid=738
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(string idx) {
    freopen((idx + ".in").c_str(), "r", stdin);
    freopen((idx + "_.out").c_str(), "w", stdout);
    int n, a, b; cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({ b,a });
    }
    sort(v.begin(), v.end());
    int i = 0, j = n - 1, ans = 0;
    while (i <= j) {
        int k = min(v[i].second, v[j].second);
        if (i == j) k /= 2;
        ans = max(ans, v[i].first + v[j].first);
        v[i].second -= k;
        v[j].second -= k;
        if (v[i].second == 0) i++;
        if (v[j].second == 0) j--;
    }
    cout << ans << '\n';
}
int main() {
    for (int i = 1; i <= 10; i++) {
        solve(to_string(i));
    }
}