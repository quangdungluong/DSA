#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n;
string s;
void solve() {
    cin >> n;
    vector<int> a(n);
    int m = INT_MAX;
    FOR(i, 0, n - 1) {
        cin >> a[i];
        m = min(m, a[i]);
    }
    int cnt = 0, ans = INT_MAX;
    FORD(j, m, 0) {
        FOR(i, 0, n - 1) {
            int diff = a[i] - m;
            cnt += diff / 5;
            diff %= 5;
            cnt += diff / 2;
            cnt += diff % 2;
        }
    }

    cout << cnt << '\n';
}
int main() {
    cin >> t;
    while (t--)
        solve();
    system("pause");
    return 0;
}