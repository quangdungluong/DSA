#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve() {
    int n, m, x; cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    int ans = 0, j = 0;
    for (int i = 0; i < n; i++) {
        while (1 && j < m - 1) {
            if (abs(b[j + 1] - a[i]) <= abs(b[j] - a[i])) j++;
            else break;
        }
        ans = max(ans, abs(b[j] - a[i]));
    }
    cout << ans << '\n';
}
int main() {
    IOS;
    solve();
    // system("pause");
    return 0;
}