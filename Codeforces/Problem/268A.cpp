#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
void solve() {
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    FOR(i, 0, n - 1) {
        cin >> a[i] >> b[i];
    }
    int ans = 0;
    FOR(i, 0, n - 2) {
        FOR(j, i + 1, n - 1) {
            if (a[i] == b[j]) ans++;
            if (b[i] == a[j]) ans++;
        }
    }
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}