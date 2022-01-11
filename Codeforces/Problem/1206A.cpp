#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, m, x;
vector<int> a, b;
void solve() {
    cin >> n;
    FOR(i, 0, n - 1) {
        cin >> x;
        a.push_back(x);
    }
    cin >> m;
    FOR(i, 0, m - 1) {
        cin >> x;
        b.push_back(x);
    }
    sort(all(a));
    sort(all(b));
    cout << a[n - 1] << " " << b[m - 1] << '\n';
}
int main() {
    solve();
    return 0;
}