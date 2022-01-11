#include <bits/stdc++.h>
using namespace std;

int n;
string a, b;
void solve(string i) {
    freopen((i + ".in").c_str(), "r", stdin);
    freopen((i + "_.out").c_str(), "w", stdout);
    cin >> n >> a >> b;
    int ans = 0;
    bool flag = true;
    for (int j = 0; j < n; j++) {
        if (a[j] != b[j]) {
            ans += flag;
            if (flag) flag = !flag;
        }
        else flag = true;
    }
    cout << ans << '\n';
}
int main() {
    for (int i = 1; i < 11; i++) {
        solve(to_string(i));
    }
}