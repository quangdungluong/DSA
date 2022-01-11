#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int h, w;
string s;
void solve() {
    cin >> h >> w;
    vector<vector<int>> a(h + 1);
    FOR(i, 0, h - 1) {
        a[i].resize(w + 1);
        FOR(j, 0, w - 1) {
            cin >> a[i][j];
        }
        a[i][w] = 0;
    }
    a[h].resize(w + 1);
    int cnt = 0;
    FOR(i, 0, h - 1) {
        FOR(j, 0, w - 1) {
            cnt += a[i][j] * 4 + 2;
            cnt -= 2 * min(a[i][j], a[i + 1][j]);
            cnt -= 2 * min(a[i][j], a[i][j + 1]);
        }
    }
    cout << cnt << '\n';
}
int main() {
    solve();
    return 0;
}