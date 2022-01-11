#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, b, p, f, h, c;
void solve() {
    int profit = 0;
    if (h > c) {
        int tmp = min(b / 2, p);
        b -= tmp * 2;
        profit += tmp * h;
        tmp = min(b / 2, f);
        profit += tmp * c;
    }
    else {
        int tmp = min(b / 2, f);
        b -= tmp * 2;
        profit += tmp * c;
        tmp = min(b / 2, p);
        profit += tmp * h;
    }
    cout << profit << '\n';
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> b >> p >> f >> h >> c;
        solve();
    }
    return 0;
}