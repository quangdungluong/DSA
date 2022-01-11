#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    if (n == 1) {
        if (a[0] == 1) cout << "1\n";
        else cout << "-1\n";
    }
    else {
        int ans = 0;
        int light = -1;
        bool valid = true;
        for (int i = 0; i < n; i++) {
            for (int j = min(i + k - 1, n - 1); j >= 0, j >= i - k + 1; j--) {
                if (a[j] == 1) {
                    light = j;
                    ans++;
                    break;
                }
            }
            if (light == -1) {
                valid = false;
                break;
            }
            else {
                i = light + k - 1;
                light = -1;
            }
        }
        if (!valid) cout << "-1\n";
        else cout << ans << '\n';
    }
    return 0;
}