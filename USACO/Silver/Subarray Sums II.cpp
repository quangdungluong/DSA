#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

ll n, x, a;
int main() {
    IOS;
    cin >> n >> x;
    map<ll, int> m;
    ll curr = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        curr += a;
        if (curr == x) ans++;
        if (m.find(curr - x) != m.end()) {
            ans += m[curr - x];
        }
        m[curr]++;
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}