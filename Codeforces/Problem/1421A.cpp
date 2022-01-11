#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, a, b;
string s;
void solve() {
    cin >> a >> b;
    cout << (a ^ b) << '\n';
}
int main() {
    cin >> t;
    while (t--)
        solve();
    return 0;
}