#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
string s;
void solve() {
    cin >> n;
    vector<int> a(n);
    FOR(i, 0, n - 1) cin >> a[i];
    int e = 0;
    for (int i = n - 1; i >= 0; i--) {
        e = ceil((float)(e + a[i]) / 2);
    }
    cout << e << '\n';
}
int main() {
    solve();
    return 0;
}