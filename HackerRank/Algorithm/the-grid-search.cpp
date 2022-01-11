#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
int R, C, r, c;
void solve() {
    cin >> R >> C;
    vector<string> a(R);
    FOR(i, 0, R - 1) cin >> a[i];
    cin >> r >> c;
    vector<string> b(r);
    FOR(i, 0, r - 1) cin >> b[i];
    bool y = false;
    FOR(i, 0, R - r) {
        int str = 0;
        while (a[i].find(b[0], str) != string::npos) {
            int found = a[i].find(b[0], str);
            bool k = true;
            FOR(j, 1, r - 1) {
                if (a[i + j].find(b[j], found) != found) {
                    k = false;
                    str = found + 1;
                    break;
                }
            }
            if (k) {
                y = true;
                break;
            }
        }
    }
    if (y) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}