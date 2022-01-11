#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

ll n, m, a;
void solve() {
    cin >> n >> m >> a;
    ll x = (n % a) ? n / a + 1 : n / a;
    ll y = (m % a) ? m / a + 1 : m / a;
    cout << x * y << '\n';
}
int main() {
    solve();
    return 0;
}