#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
int x;
void solve() {
    cin >> n;
    int a = INT_MAX, b = 0;
    FOR(i, 0, n - 1) {
        cin >> x;
        a = min(a, x);
        b = max(b, x);
    }
    cout << b - a - n + 1 << '\n';
}
int main() {
    solve();
    return 0;
}