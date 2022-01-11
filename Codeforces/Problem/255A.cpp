#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, x;
string s;
void solve() {
    cin >> n;
    int a = 0, b = 0, c = 0;
    FOR(i, 0, n - 1) {
        cin >> x;
        if (i % 3 == 0) a += x;
        if (i % 3 == 1) b += x;
        if (i % 3 == 2) c += x;
    }
    if (a > b && a > c) cout << "chest\n";
    else if (b > a && b > c) cout << "biceps\n";
    else cout << "back\n";
}
int main() {
    solve();
    return 0;
}