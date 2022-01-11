#include <bits/stdc++.h>
using namespace std;

int n;
string s;
bool solve(int len) {
    set<string> a;
    for (int i = 0; i < n; i++) {
        if (a.count(s.substr(i, len))) return true;
        a.insert(s.substr(i, len));
    }
    return false;
}
int main() {
    freopen("3.in", "r", stdin);
    freopen("3a.out", "w", stdout);
    cin >> n >> s;
    int ans = 1;
    while (solve(ans)) ans++;
    cout << ans;
}