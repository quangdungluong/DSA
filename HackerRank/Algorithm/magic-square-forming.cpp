#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
void solve() {
    vector<vector<int>> v(3);
    FOR(i, 0, 2) {
        v[i].resize(3);
        FOR(j, 0, 2) cin >> v[i][j];
    }
    int squares[8][3][3] = {
        {{8,1,6},{3,5,7},{4,9,2}},
        {{4,3,8},{9,5,1},{2,7,6}},
        {{2,9,4},{7,5,3},{6,1,8}},
        {{6,7,2},{1,5,9},{8,3,4}},
        {{6,1,8},{7,5,3},{2,9,4}},
        {{8,3,4},{1,5,9},{6,7,2}},
        {{4,9,2},{3,5,7},{8,1,6}},
        {{2,7,6},{9,5,1},{4,3,8}}
    };
    int ans = INT_MAX;
    FOR(i, 0, 7) {
        int cnt = 0;
        FOR(j, 0, 2) {
            FOR(k, 0, 2) {
                cnt += abs(squares[i][j][k] - v[j][k]);
            }
        }
        ans = min(cnt, ans);
    }
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}