#include <bits/stdc++.h>
using namespace std;

int a[10][10];
int n;
string row;
int flip(int x, int y) {
    if (a[x][y] == 1) {
        for (int i = 0; i <= x; i++) {
            for (int j = 0; j <= y; j++) a[i][j] = !a[i][j];
        }
        return 1;
    }
    return 0;
}
void solve(string idx) {
    freopen((idx + ".in").c_str(), "r", stdin);
    freopen((idx + "_.out").c_str(), "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> row;
        for (int j = 0; j < n; j++) {
            a[i][j] = (row[j] == '1') ? 1 : 0;
        }
    }
    int x = n - 1, y = n - 1, ans = 0;
    while (x >= 0 && y >= 0) {
        ans += flip(x, y);
        if (x != y) {
            ans += flip(y, x);
        }
        x--;
        if (x < 0) {
            y--;
            x = y;
        }
    }
    cout << ans;
}
int main() {
    for (int idx = 1; idx <= 10; idx++) {
        solve(to_string(idx));
    }
}