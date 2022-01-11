#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

ll t, a, b;
string s;
void solve() {
    cin >> a >> b;
    if (a == 0) cout << "0\n";
    else {
        ll cnt = 0;
        while (a != b) {
            a >>= 1;
            b >>= 1;
            cnt++;
        }
        cout << (a << cnt) << '\n';
    }

}
int main() {
    cin >> t;
    while (t--)
        solve();
    return 0;
}