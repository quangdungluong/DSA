#include <bits/stdc++.h>
using namespace std;

int n;
int a[100];
int solve() {
    sort(a, a + 2 * n);
    int ans = 1e9;
    for (int i = 0; i < 2 * n; i++) {
        for (int j = i + 1; j < 2 * n; j++) {
            vector<int> b;
            for (int k = 0; k < 2 * n; k++) {
                if (k != i && k != j) b.push_back(a[k]);
            }
            int total = 0;
            for (int k = 1; k < b.size(); k += 2) total += b[k] - b[k - 1];
            ans = min(total, ans);
        }
    }
    return ans;
}
int main() {
    cin >> n;
    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
    }
    cout << solve();
    return 0;
}