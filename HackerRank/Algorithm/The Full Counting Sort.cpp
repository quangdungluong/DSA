#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, x;
string s;
void solve() {
    vector<vector<string>> v(100);
    cin >> n;
    FOR(i, 0, n - 1) {
        cin >> x >> s;
        if (i < n / 2) s = '-';
        v[x].push_back(s);
    }
    FOR(i, 0, 99) {
        if (sz(v[i])) {
            for (auto x : v[i]) {
                cout << x << " ";
            }
        }
    }
}
int main() {
    solve();
    return 0;
}