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
    int sum = accumulate(all(a), 0);
    int curr = 0;
    bool valid = false;
    FOR(i, 0, n - 1) {
        if (curr == sum - curr - a[i]) {
            valid = true;
            break;
        }
        else if (curr > sum - curr - a[i]) {
            break;
        }
        curr += a[i];
    }
    if (valid) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}