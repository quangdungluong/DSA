#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> v;
    for (auto x : s) {
        if (x != '+') {
            v.push_back(x - '0');
        }
    }
    sort(v.begin(), v.end());
    string ans = "";
    for (int i = 0; i < v.size() - 1; i++) {
        ans += to_string(v[i]) + '+';
    }
    cout << ans + to_string(v.back());
    return 0;
}