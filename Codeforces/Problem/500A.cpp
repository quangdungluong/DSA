#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
int n;
void solve() {
    cin >> n >> t;
    vector<int> a(n - 1);
    FOR(i, 0, n - 2) cin >> a[i];
    int curr = 0;
    while (curr < t - 1) {
        curr += a[curr];
    }
    if (curr == t - 1) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    solve();
    return 0;
}