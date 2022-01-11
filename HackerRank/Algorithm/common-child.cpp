#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

//find the max common child of 2 strings from idx i and j
string a, b;
int f[5001][5001];
void solve() {
    cin >> a >> b;
    int n = sz(a);
    memset(f, 0, sizeof(f));
    FOR(i, 1, n) {
        FOR(j, 1, n) {
            if (a[i - 1] == b[j - 1]) f[i][j] = 1 + f[i - 1][j - 1];
            else f[i][j] = max(f[i - 1][j], f[i][j - 1]);
        }
    }
    cout << f[n][n] << '\n';
}
int main() {
    solve();
    return 0;
}