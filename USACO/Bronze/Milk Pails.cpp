#include <bits/stdc++.h>
using namespace std;

int x, y, m;
int main() {
    cin >> x >> y >> m;
    int ans = 0;
    for (int i = 0; i <= m / x; i++) {
        ans = max(i * x + ((m - i * x) / y) * y, ans);
    }
    cout << ans;
    system("pause");
    return 0;
}