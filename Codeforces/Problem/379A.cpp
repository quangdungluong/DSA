#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
int a, b, ans;
void solve() {
    cin >> a >> b;
    ans = a;
    while (a >= b) {
        ans += a / b;
        a = a / b + a % b;
    }
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}