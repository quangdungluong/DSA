#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
void solve() {
    cin >> n;
    vector<int> a(n);
    FOR(i, 0, n - 1) cin >> a[i];
    int ans = 1, curr = 1;
    FOR(i, 1, n - 1) {
        if (a[i] >= a[i - 1]) curr++;
        else {
            ans = max(ans, curr);
            curr = 1;
        }
    }
    ans = max(ans, curr);
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}