#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, x, y; cin >> a >> b >> x >> y;
    int ans = min(abs(a - b), min(abs(a - x) + abs(b - y), abs(a - y) + abs(b - x)));
    cout << ans << '\n';
    system("pause");
    return 0;
}