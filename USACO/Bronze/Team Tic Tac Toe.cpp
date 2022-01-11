#include <bits/stdc++.h>
using namespace std;

vector<string> a(3);
int ans[2] = { 0 };
bool check1(char c) {
    for (int i = 0; i < 3; i++) {
        if (a[0][i] == c && a[1][i] == c && a[2][i] == c) return 1;
        if (a[i][0] == c && a[i][1] == c && a[i][2] == c) return 1;
    }
    if (a[0][0] == c && a[1][1] == c && a[2][2] == c) return 1;
    if (a[0][2] == c && a[1][1] == c && a[2][0] == c) return 1;
    return 0;
}
bool check3(char x, char y, char q, char w, char e) {
    if (x == q && x == w && y == e) return 1;
    if (x == q && y == w && x == e) return 1;
    if (y == q && x == w && x == e) return 1;
    if (y == q && y == w && x == e) return 1;
    if (y == q && x == w && y == e) return 1;
    if (x == q && y == w && y == e) return 1;
    return 0;
}
bool team_win(char x, char y) {
    for (int i = 0; i < 3; i++) {
        if (check3(x, y, a[0][i], a[1][i], a[2][i])) return 1;
        if (check3(x, y, a[i][0], a[i][1], a[i][2])) return 1;
    }
    if (check3(x, y, a[0][0], a[1][1], a[2][2])) return 1;
    if (check3(x, y, a[0][2], a[1][1], a[2][0])) return 1;
    return 0;
}
int main() {
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    cin >> a[0] >> a[1] >> a[2];
    for (char c = 'A'; c <= 'Z'; c++) {
        ans[0] += check1(c);
    }
    for (char x = 'A'; x <= 'Z'; x++) {
        for (char y = x + 1; y <= 'Z'; y++) {
            ans[1] += team_win(x, y);
        }
    }
    cout << ans[0] << '\n' << ans[1];
}