#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        int cnt = 0;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n - 1; i++) {
            int b = max(a[i], a[i + 1]);
            int c = min(a[i], a[i + 1]);
            while (c * 2 < b) {
                c *= 2;
                cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}