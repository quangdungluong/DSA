#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    IOS;
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int i = 0, j = 0, cur = 0, ans = 0;
    while (i < n && j < n) {
        while (j < n) {
            cur += a[j++];
            if (cur > t) {
                cur -= a[--j];
                break;
            }
        }
        ans = max(ans, j - i);
        cur -= a[i++];
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}