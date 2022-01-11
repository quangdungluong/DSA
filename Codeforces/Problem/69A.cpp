#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
int a = 0, b = 0, c = 0, x, y, z;
void solve() {
    while (t--) {
        cin >> x >> y >> z;
        a += x;
        b += y;
        c += z;
    }
    if (a == 0 && b == 0 && c == 0) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    cin >> t;
    solve();
    return 0;
}