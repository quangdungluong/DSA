#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
int n;
string s;
void solve() {
    cin >> n >> s;
    int curr = 0, ans = 0;
    for (auto x : s) {
        if (x == '(') curr++;
        if (x == ')') {
            if (curr == 0) ans++;
            else curr--;
        }
    }
    cout << ans << '\n';
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}