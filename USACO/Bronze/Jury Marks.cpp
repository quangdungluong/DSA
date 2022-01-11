#include <bits/stdc++.h>
using namespace std;

int n, k;
int main() {
    cin >> k >> n;
    vector<int> a(k + 1), b(n);
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    for (int i = 0; i < n; i++) cin >> b[i];
    set<int> init;
    for (int i = 1; i <= k; i++) {
        init.insert(b.front() - a[i]);
    }
    int ans = 0;
    for (auto x : init) {
        set<int> points;
        for (int i = 1; i <= k; i++) points.insert(x + a[i]);
        bool flag = true;
        for (auto y : b) flag &= points.count(y);
        ans += flag;
    }
    cout << ans << '\n';
    return 0;
}