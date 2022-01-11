#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve() {
    int n, x, a; cin >> n >> x;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        v.push_back({ a,i });
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        int j = i + 1, k = n - 1;
        while (j < k) {
            int sum = v[i].first + v[j].first + v[k].first;
            if (sum == x) {
                cout << v[i].second << ' ' << v[j].second << ' ' << v[k].second << '\n';
                return;
            }
            if (sum > x) {
                k--;
            }
            else j++;
        }
    }
    cout << "IMPOSSIBLE\n";
}
int main() {
    IOS;
    solve();
    // system("pause");
    return 0;
}