#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
int a, b, c;
void solve() {
    cin >> a >> b >> c;
    cout << max((a + b) * c, max(a + b + c, max(a * b * c, a * (b + c))));
}
int main() {
    solve();
    return 0;
}