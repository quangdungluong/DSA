#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, m, r;

void solve() {
    cin >> m >> n >> r;
    vector<vector<int>> a(m);
    FOR(i, 0, m - 1) {
        a[i].resize(n);
        FOR(j, 0, n - 1) cin >> a[i][j];
    }
    vector<vector<int>> b = a;
    int layer = min(m / 2, n / 2);
    FOR(i, 0, layer - 1) {
        int rot = r % (2 * (m + n - 4 * i) - 4);
        if (rot != 0) {
            vector<pair<int, int>> data;
            FOR(j, i, n - i - 1) {
                data.push_back(make_pair(i, j));
            }
            FOR(j, i + 1, m - i - 1) {
                data.push_back(make_pair(j, n - i - 1));
            }
            FORD(j, n - i - 2, i) {
                data.push_back(make_pair(m - i - 1, j));
            }
            FORD(j, m - i - 2, i + 1) {
                data.push_back(make_pair(j, i));
            }
            FOR(j, 0, sz(data) - 1) {
                int k = (j + rot) % (2 * (m + n - 4 * i) - 4);
                int r1 = data[j].first;
                int c1 = data[j].second;
                int r2 = data[k].first;
                int c2 = data[k].second;
                b[r1][c1] = a[r2][c2];
            }
        }
    }
    FOR(i, 0, m - 1) {
        FOR(j, 0, n - 1) {
            cout << b[i][j] << " ";
        }
        cout << '\n';
    }
}
int main() {
    solve();
    return 0;
}