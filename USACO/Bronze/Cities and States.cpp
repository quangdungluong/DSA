#include <bits/stdc++.h>
using namespace std;

string a, b;
int n;
void solve(string i) {
    freopen((i + ".in").c_str(), "r", stdin);
    freopen((i + "output.out").c_str(), "w", stdout);
    cin >> n;
    int ans = 0;
    map<pair<string, string>, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        mp[{a.substr(0, 2), b}]++;
        if (a.substr(0, 2) != b) {
            ans += mp[{b, a.substr(0, 2)}];
        }
    }
    cout << ans << '\n';
}
int main() {
    for (int i = 1; i < 11; i++) {
        solve(to_string(i));
    }
}