#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n;
ll a, b;
string s;
long long change(long long x) {
    long long a = x % 8;
    if (a == 0 || a == 1) return x;
    if (a == 2 || a == 3) return 2;
    if (a == 4 || a == 5) return x + 2;
    if (a == 6 || a == 7) return 0;
    return 0;
}
void solve() {
    cin >> a >> b;
    cout << (change(a - 1) ^ change(b)) << '\n';
}
int main() {
    cin >> t;
    while (t--)
        solve();
    return 0;
}
