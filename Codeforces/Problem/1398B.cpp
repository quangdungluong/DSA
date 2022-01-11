#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        vector<int> a;
        int k = 0;
        for (auto x : s) {
            if (x == '1') {
                ++k;
            }
            else {
                a.push_back(k);
                k = 0;
            }
        }
        a.push_back(k);
        sort(a.rbegin(), a.rend());
        int ans = 0;
        for (int i = 0; i < a.size(); i += 2) {
            ans += a[i];
        }
        cout << ans << '\n';
    }
    return 0;
}