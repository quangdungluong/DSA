#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int cnt = 0, idx = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[idx]) {
                cnt = max(cnt, i - idx);
                idx = i;
            }
        }
        cout << max(cnt, n - idx) << '\n';
    }
    return 0;
}