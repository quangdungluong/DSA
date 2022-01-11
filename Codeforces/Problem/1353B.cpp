#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        int sum = 0, i = 0, j = 0;
        while (k > 0 && n-- > 0) {
            if (b[j] > a[i]) {
                sum += b[j++];
                k--;
            }
            else {
                sum += a[i++];
            }
        }
        if (n > 0) {
            int tmp = i + n;
            for (i; i < tmp;i++) sum += a[i];
        }
        cout << sum << "\n";
    }
    return 0;
}