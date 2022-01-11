#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n, x;
int main() {
    IOS;
    cin >> n;
    int curr = 0;
    long long ans = 0;
    int a[n] = { 0 };
    for (int i = 0; i < n; i++) {
        cin >> x;
        curr = (curr + x) % n;
        while (curr < 0) curr += n;
        if (curr == 0) ans++;
        if (a[curr]) ans += a[curr];
        a[curr]++;
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}