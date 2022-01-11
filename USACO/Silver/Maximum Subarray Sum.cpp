#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    IOS;
    int n, x; cin >> n;
    ll ans = -1e9, cur = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cur += x;
        ans = max(cur, ans);
        cur = max((ll)0, cur);
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}