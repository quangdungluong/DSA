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
    int b = INT_MIN, c = 0, s = 0, m = INT_MIN;
    FOR(i, 0, n - 1) {
        cin >> a[i];
        m = max(m, a[i]);
        if (a[i] > 0) c += a[i];
        s = ((s > 0) ? s : 0) + a[i];
        b = max(b, s);
    }
    if (c == 0) c = m;
    cout << b << " " << c << '\n';
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}