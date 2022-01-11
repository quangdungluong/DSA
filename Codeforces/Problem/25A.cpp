#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int c, n;
void solve() {
    cin >> n;
    vector<int> a(n);
    FOR(i, 0, n - 1) cin >> a[i];
    if (a[0] % 2 == a[1] % 2) {
        c = a[0] % 2;
        FOR(i, 2, n - 1) {
            if (a[i] % 2 != c) {
                cout << i + 1 << '\n';
                break;
            }
        }
    }
    else {
        if (a[0] % 2 == a[2] % 2) cout << 2 << '\n';
        else cout << 1 << '\n';
    }
}
int main() {
    solve();
    return 0;
}