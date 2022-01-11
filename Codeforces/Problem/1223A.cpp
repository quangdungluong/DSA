#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

void solve(int t) {
    if (t <= 4) cout << 4 - t << '\n';
    else {
        cout << t % 2 << '\n';
    }
}
int main() {
    int q, t;
    cin >> q;
    while (q--) {
        cin >> t;
        solve(t);
    }
    return 0;
}