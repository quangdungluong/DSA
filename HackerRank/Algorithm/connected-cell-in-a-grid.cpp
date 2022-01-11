#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, m;
string s;
int solve(vector<vector<int>>& a, int i, int j) {
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == -1 || a[i][j] == 1) return 0;
    a[i][j] = 1;
    return 1 + solve(a, i + 1, j) + solve(a, i, j + 1) + solve(a, i - 1, j) + solve(a, i, j - 1) + solve(a, i + 1, j + 1) + solve(a, i - 1, j - 1) + solve(a, i + 1, j - 1) + solve(a, i - 1, j + 1);
}
int main() {
    cin >> n >> m;
    vector<vector<int>> a(n);
    FOR(i, 0, n - 1) {
        a[i].resize(m);
        FOR(j, 0, m - 1) {
            cin >> a[i][j];
            a[i][j] -= 1;
        }
    }
    int ans = 0;
    FOR(i, 0, n - 1) {
        FOR(j, 0, m - 1) {
            if (a[i][j] == 0) {
                vector<vector<int>> b = a;
                ans = max(ans, solve(b, i, j));
            }
        }
    }
    cout << ans << '\n';
    return 0;
}