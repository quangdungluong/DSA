#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n;
void solve() {
    cin >> n >> t;
    if (n == 1 && t == 10) cout << "-1\n";
    else {
        if (t == 10) t = 1;
        cout << t;
        for (int i = 1; i < n; i++) cout << "0";
    }
}
int main() {
    solve();
    return 0;
}