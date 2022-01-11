#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t, n;
    string b;
    cin >> t;
    while (t--) {
        cin >> n >> b;
        string ans = "1";
        for (int i = 1; i < n; i++) {
            int tmp = ans[i - 1] - '0' + b[i - 1] - '0';
            if (tmp == 1) {
                if (b[i] == '0') ans += '0';
                else ans += '1';
            }
            else if (tmp == 0) {
                ans += '1';
            }
            else {
                if (b[i] == '1') ans += '0';
                else ans += '1';
            }
        }
        cout << ans << '\n';
    }
    return 0;
}