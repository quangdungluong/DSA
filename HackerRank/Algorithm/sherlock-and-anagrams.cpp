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
    int n = sz(s);
    map<string, int> m;
    FOR(i, 0, n - 1) {
        for (int j = 1; j + i - 1 < n;j++) {
            string a = s.substr(i, j);
            sort(all(a));
            m[a]++;
        }
    }
    ll ans = 0;
    for (auto itr = m.begin(); itr != m.end();itr++) {
        ans += (ll)itr->second * (itr->second - 1) / 2;
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