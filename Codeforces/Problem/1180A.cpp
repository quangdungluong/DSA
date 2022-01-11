#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
void solve() {
    cin >> n;
    cout << 2 * n * n - 2 * n + 1 << '\n';
}
int main() {
    solve();
    return 0;
}