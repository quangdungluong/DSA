#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        for (int i = 1; i < n; i++) a[i] += a[i - 1];
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                if (a[n - 1] > (i + 2) * (a[n - 1] - a[i])) {
                    cout << a[n - 1] << endl;
                    break;
                }
            }
            else {
                if ((i + 1) * (a[n - 1] - a[i - 1]) > (i + 2) * (a[n - 1] - a[i])) {
                    cout << (i + 1) * (a[n - 1] - a[i - 1]) << endl;
                    break;
                }
            }
        }
    }
    return 0;
}