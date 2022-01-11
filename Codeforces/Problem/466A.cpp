#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, m, a, b;
void solve() {
    cin >> n >> m >> a >> b;
    int ans = min(n * a, min((n / m) * b + (n % m) * a, (n / m + (n % m != 0)) * b));
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}