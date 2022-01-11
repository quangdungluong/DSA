#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n;
void solve() {
    cin >> n;
    vector<int> a(n);
    FOR(i, 0, n - 1) cin >> a[i];
    sort(all(a));
    bool c = true;
    FOR(i, 1, n - 1) {
        if (a[i] - a[i - 1] <= 1) {
            c = false;
            break;
        }
    }
    if (c) cout << "1\n";
    else cout << "2\n";
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}