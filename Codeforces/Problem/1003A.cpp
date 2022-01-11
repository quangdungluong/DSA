#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

void solve(vector<int> a, int n) {
    sort(all(a));
    int cnt = 0, idx = 0;
    FOR(i, 1, n - 1) {
        if (a[i] != a[idx]) {
            cnt = max(cnt, i - idx);
            idx = i;
        }
    }
    cnt = max(cnt, n - idx);
    cout << cnt << '\n';
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    FOR(i, 0, n - 1) cin >> a[i];
    solve(a, n);
    return 0;
}