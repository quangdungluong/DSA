#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n;
int a[1001];
void solve() {
    cin >> n;
    int inv = 0;
    FOR(i, 0, n - 1) cin >> a[i];
    FOR(i, 0, n - 2) {
        FOR(j, i + 1, n - 1) {
            if (a[i] > a[j]) inv++;
        }
    }
    if (inv % 2) cout << "NO\n";
    else cout << "YES\n";
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}