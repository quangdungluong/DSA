#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cur = 0, pow = 1;
    int mp[2019] = { 1 };
    for (int i = s.size() - 1; i >= 0; i--) {
        cur = (cur + pow * (s[i] - '0')) % 2019;
        mp[cur]++;
        pow = pow * 10 % 2019;
    }
    long long ans = 0;
    for (auto x : mp) {
        ans += x * (x - 1) / 2;
    }
    cout << ans << '\n';
    return 0;
}