#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n;
void solve() {
    cin >> n;
    if (n % 7 == 0 || n % 7 == 1) cout << "Second\n";
    else cout << "First\n";
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}