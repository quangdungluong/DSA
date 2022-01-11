#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n, x;
void solve(string idx) {
    freopen((idx + ".in").c_str(), "r", stdin);
    freopen((idx + "_.out").c_str(), "w", stdout);
    cin >> n;
    vector<int> first(7, -1);
    first[0] = 0;
    int ans = 0, curr = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        curr = (curr + x) % 7;
        if (first[curr] == -1) {
            first[curr] = i;
        }
        else {
            ans = max(ans, i - first[curr]);
        }
    }
    cout << ans;
}
int main() {
    for (int i = 1; i <= 10; i++) {
        solve(to_string(i));
    }
}
