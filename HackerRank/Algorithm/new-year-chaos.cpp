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
    FOR(i, 0, n - 1) {
        cin >> a[i];
    }
    int cnt = 0;
    bool valid = true;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] - (i + 1) > 2) {
            cout << "Too chaotic\n";
            valid = false;
            break;
        }
        FOR(j, max(0, a[i] - 2), i - 1) {
            cnt += a[j] > a[i];
        }
    }
    if (valid) cout << cnt << '\n';

}
int main() {
    cin >> t;
    while (t--)
        solve();
    return 0;
}