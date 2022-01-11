#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        long ans = 0;
        int curr = a[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] < curr) {
                ans += curr - a[i];
            }
            else {
                curr = a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}