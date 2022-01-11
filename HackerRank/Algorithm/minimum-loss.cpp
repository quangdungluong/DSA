#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
ll x;
int main() {
    cin >> n;
    map<ll, int> m;
    FOR(i, 0, n - 1) {
        cin >> x;
        m[x] = i;
    }
    ll ans = INT64_MAX;
    map<ll, int>::iterator itr = ++m.begin(), pre = m.begin();
    for (; itr != m.end(); itr++) {
        ll tmp = (itr->first) - (pre->first);
        if (tmp < ans && tmp) {
            if (pre->second > itr->second) {
                ans = tmp;
            }
        }
        pre++;
    }
    cout << ans;
    return 0;
}