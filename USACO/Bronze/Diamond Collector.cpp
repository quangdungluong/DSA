#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        int cnt = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[j] - a[i] <= k) cnt++;
            else break;
        }
        ans = max(cnt, ans);
    }
    cout << ans;
    system("pause");
    return 0;
}