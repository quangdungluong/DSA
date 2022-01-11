#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

ll n;
void solve() {
    cin >> n;
    ll cnt = 0;
    while (n) {
        cnt += (n % 2) ? 0 : 1;
        n /= 2;
    }
    cout << (ll)pow(2, cnt) << '\n';
}
int main() {
    solve();
    return 0;
}