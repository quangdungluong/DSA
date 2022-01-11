#include <bits/stdc++.h>
using namespace std;

long long t, n;
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        if (n % 2050) cout << "-1\n";
        else {
            n = n / 2050;
            int ans = 0;
            while (n) {
                ans += n % 10;
                n /= 10;
            }
            cout << ans << '\n';
        }
    }
    return 0;
}