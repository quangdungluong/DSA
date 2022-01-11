// https://codeforces.com/problemset/problem/814/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    IOS;
    int n, q, m;
    string s;
    char c;
    cin >> n >> s >> q;
    for (int i = 0; i < q; i++) {
        cin >> m >> c;
        int res = 0, l = 0, r = 0;
        while (l < n && r < n) {
            while (r < n) {
                if (s[r] != c) {
                    if (m == 0) break;
                    m--;
                }
                r++;
            }
            res = max(res, r - l);
            m += s[l++] != c;
        }
        cout << res << '\n';
    }
    // system("pause");
    return 0;
}
