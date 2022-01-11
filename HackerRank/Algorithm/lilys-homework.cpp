#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
map<ll, int> m;
int solve(vector<ll> a, vector<ll> sorted, int n) {
    FOR(i, 0, n - 1) {
        m[a[i]] = i;
    }
    int sw = 0;
    FOR(i, 0, n - 1) {
        if (a[i] != sorted[i]) {
            sw++;
            int pos = m[sorted[i]];
            swap(a[i], a[pos]);
            m[a[pos]] = pos;
        }
    }
    return sw;
}
int main() {
    cin >> n;
    vector<ll> a(n);
    FOR(i, 0, n - 1) cin >> a[i];
    vector<ll> sorted = a;
    sort(all(sorted));
    int ans = solve(a, sorted, n);
    reverse(all(sorted));
    ans = min(ans, solve(a, sorted, n));
    cout << ans << '\n';
    return 0;
}