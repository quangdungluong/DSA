#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int cnt_even = 0, cnt_odd = 0, a;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a % 2 != i % 2) {
                if (i % 2) cnt_odd++;
                else cnt_even++;
            }
        }
        if (cnt_even != cnt_odd) cout << -1 << "\n";
        else cout << cnt_even << "\n";
    }
    return 0;
}