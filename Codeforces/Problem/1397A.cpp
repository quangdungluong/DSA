#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string s;
        vector<int> a(26, 0);
        for (int i = 0; i < n; i++) {
            cin >> s;
            for (auto x : s) {
                a[x - 'a']++;
            }
        }
        bool c = true;
        for (auto x : a) {
            if (x % n) {
                c = false;
                break;
            }
        }
        if (c) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}