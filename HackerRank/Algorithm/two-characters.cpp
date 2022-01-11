#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
string s;
void solve() {
    cin >> n >> s;
    vector<int> f(26, 0);
    for (auto x : s) f[x - 'a']++;
    int ans = 0;
    FOR(i, 0, 24) {
        if (f[i] == 0) continue;
        FOR(j, i + 1, 25) {
            if (f[j] == 0) continue;
            char last = -1;
            bool valid = true;
            for (auto x : s) {
                if (x == 'a' + i || x == 'a' + j) {
                    if (x == last) {
                        valid = false;
                        break;
                    }
                    last = x;
                }
            }
            if (valid) {
                ans = max(ans, f[i] + f[j]);
            }
        }
    }
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}