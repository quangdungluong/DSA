#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, k;
void solve() {
    cin >> n >> k;
    vector<int> a(n);
    FOR(i, 0, n - 1) cin >> a[i];
    int ans = 0;
    int page = 1;
    FOR(i, 0, n - 1) {
        int remain = k;
        FOR(j, 1, a[i]) {
            if (remain > 0) {
                remain--;
            }
            else {
                remain = k - 1;
                page++;
            }
            if (j == page) ans++;
            if (j == a[i]) {
                page++;
            }
        }
    }
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}