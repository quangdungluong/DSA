#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        string ans = "";
        ans += s[0];
        for (int i = 1; i < s.length() - 1; i += 2) {
            ans += s[i];
        }
        ans += s[s.length() - 1];
        cout << ans << "\n";
    }
    return 0;
}