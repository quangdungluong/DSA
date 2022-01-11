#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll t, w, h, n;
    cin >> t;
    while (t--) {
        cin >> w >> h >> n;
        ll cnt = 0;
        while (w % 2 == 0) {
            cnt++;
            w /= 2;
        }
        while (h % 2 == 0) {
            cnt++;
            h /= 2;
        }
        if (pow(2, cnt) >= n) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}