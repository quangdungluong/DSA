#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

string s;
void solve() {
    bool c = false;
    for (auto x : s) {
        if (x == 'H' || x == 'Q' || x == '9') {
            c = true;
            break;
        }
    }
    if (c) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    cin >> s;
    solve();
    return 0;
}