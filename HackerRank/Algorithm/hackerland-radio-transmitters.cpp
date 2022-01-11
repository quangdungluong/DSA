#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int ans = 0, st = 0, idx = -1;
    //idx = -1 : no light, find light
    //else find last point
    for (int i = 1; i < n; i++) {
        if (idx == -1) {
            if (a[i] - a[st] > k) {
                idx = i - 1;
                ans++;
                i--;
            }
        }
        else {
            if (a[i] - a[idx] > k) {
                idx = -1;
                st = i;
            }
        }
    }
    if (idx == -1) ans++;
    cout << ans << '\n';
    return 0;
}