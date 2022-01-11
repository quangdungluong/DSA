#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
ll a, b;
void solve() {
    cin >> a >> b;
    ll tmp = a / 2 + (a % 2);
    if (b <= tmp) cout << b * 2 - 1 << '\n';
    else cout << (b - tmp) * 2 << '\n';
}
int main() {
    solve();
    return 0;
}