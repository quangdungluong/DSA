#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n, k;
int main() {
    cin >> t;
    while (t--) {
        cin >> n >> k;
        vector<int> a(n);
        FOR(i, 0, n - 1) cin >> a[i];
        sort(all(a));
        int dp[n + 1];
        memset(dp, 0, sizeof(dp));
        int ans = 0;
        FOR(i, 0, sz(a) - 1) {
            FOR(j, a[i], n + 1) {
                if (j == a[i] || dp[j - a[i]]) {
                    dp[j] = 1;
                    ans = max(ans, j);
                }
            }
        }
        cout << ans << '\n';
    }
    system("pause");
    return 0;
}