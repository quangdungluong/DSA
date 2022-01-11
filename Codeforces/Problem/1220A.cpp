#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string s;
    cin >> t >> s;
    int z = 0, e = 0, r = 0, o = 0, n = 0;
    for (auto x : s) {
        if (x == 'z') z++;
        if (x == 'e') e++;
        if (x == 'r') r++;
        if (x == 'o') o++;
        if (x == 'n') n++;
    }
    int tmp = min(o, min(n, e));
    string ans = "";
    for (int i = 0; i < tmp; i++) {
        ans += "1 ";
    }
    n -= tmp;
    e -= tmp;
    tmp = min(z, min(e, min(r, o)));
    for (int i = 0; i < tmp; i++) {
        ans += "0 ";
    }
    cout << ans << '\n';
    return 0;
}