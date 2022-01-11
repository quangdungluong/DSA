#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
ll a[101];
int main() {
    freopen("file.in", "r", stdin);
    freopen("file.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int cnt = 1, cur = i;
        ll t = 1;
        while (cur >= 0) {
            int tmp = cur;
            for (int j = cur - 1; j >= 0; j--) {
                if (a[j] + t >= a[cur]) { tmp = j; cnt++; }
                else break;
            }
            if (tmp == cur) break;
            else {
                cur = tmp;
                t++;
            }
        }
        t = 1, cur = i;
        while (cur < n) {
            int tmp = cur;
            for (int j = cur + 1; j < n; j++) {
                if (a[cur] + t >= a[j]) { tmp = j; cnt++; }
                else break;
            }
            if (tmp == cur) break;
            else {
                cur = tmp;
                t++;
            }
        }
        ans = max(cnt, ans);
    }
    cout << ans;
}