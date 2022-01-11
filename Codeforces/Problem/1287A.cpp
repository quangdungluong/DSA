#include <bits/stdc++.h>
using namespace std;

int t, k;
string s;
int main() {
    cin >> t;
    while (t--) {
        cin >> k >> s;
        int cnt = 0, idx = k;
        for (int i = k; i >= 0; i--) {
            if (s[i] == 'A') {
                cnt = max(cnt, idx - i - 1);
                idx = i;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}