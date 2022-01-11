#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

ll fact(ll n) {
    ll ans = 1;
    FOR(i, 2, n) {
        ans *= i;
    }
    return ans;
}
int main() {
    int n;
    cin >> n;
    cout << 2 * fact(n) / (ll)(n * n) << '\n';
    return 0;
}