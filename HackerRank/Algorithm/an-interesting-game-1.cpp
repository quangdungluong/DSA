#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n, x;
void solve() {
    int tmp, cnt = 1;
    cin >> n >> tmp;
    FOR(i, 1, n - 1) {
        cin >> x;
        if (x > tmp) {
            cnt++;
            tmp = x;
        }
    }
    if (cnt % 2) cout << "BOB\n";
    else cout << "ANDY\n";
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}