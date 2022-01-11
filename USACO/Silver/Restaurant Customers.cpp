#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    IOS;
    int n, a, b; cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({ a,1 });
        v.push_back({ b,-1 });
    }
    sort(v.begin(), v.end());
    int ans = 0, cur = 0;
    for (auto x : v) {
        cur += x.second;
        ans = max(cur, ans);
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}