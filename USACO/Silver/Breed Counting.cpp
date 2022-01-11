#include <bits/stdc++.h>
using namespace std;

int n, q, x, a, b;
void solve(string idx) {
    freopen((idx + ".in").c_str(), "r", stdin);
    freopen((idx + "_.out").c_str(), "w", stdout);
    cin >> n >> q;
    vector<vector<int>> v(n + 1, vector<int>(3, 0));
    for (int i = 1; i <= n; i++) {
        cin >> x;
        v[i] = v[i - 1];
        v[i][x - 1]++;
    }
    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        cout << v[b][0] - v[a - 1][0] << ' ' << v[b][1] - v[a - 1][1] << ' ' << v[b][2] - v[a - 1][2] << '\n';
    }
}
int main() {
    for (int i = 1; i <= 15; i++) {
        solve(to_string(i));
    }
}