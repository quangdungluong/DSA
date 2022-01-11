#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int cnt = 0;
    s = 'a' + s;
    for (int i = 1; i < s.size(); i++) {
        cnt += min(abs(s[i] - s[i - 1]), 26 - abs(s[i] - s[i - 1]));
    }
    cout << cnt << '\n';
    return 0;
}