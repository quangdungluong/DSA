#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        int cnt = 0;
        int first = 0, last = 0;
        for (int i = 0; i < s.size();i++) {
            if (s[i] == '1') {
                first = i;
                break;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '1') {
                last = i;
                break;
            }
        }
        for (auto x : s) cnt += (x == '1');
        if (last == first) cout << 0 << '\n';
        else cout << last - first + 1 - cnt << '\n';
    }
    return 0;
}