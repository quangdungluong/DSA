#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
string s;
void solve() {
    cin >> s;
    string ans = "";
    string tmp = "";
    FOR(i, 0, sz(s) - 1) {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            if (tmp != "") ans = ans + tmp + " ";
            tmp = "";
            i += 2;
        }
        else {
            tmp += s[i];
        }
    }
    ans += tmp;
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}