#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        ans += (a + b + c >= 2);
    }
    cout << ans << '\n';
    return 0;
}