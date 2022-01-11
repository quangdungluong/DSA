#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
void solve() {
    vector<int> a(n);
    FOR(i, 0, n - 1) cin >> a[i];
    sort(all(a));
    int cnt = 0;
    for (int i = 0; i < n; i += 2) {
        cnt += a[i + 1] - a[i];
    }
    cout << cnt << '\n';
}
int main() {
    cin >> n;
    solve();
    return 0;
}