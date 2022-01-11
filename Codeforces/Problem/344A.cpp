#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    int cnt = 0, idx = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[idx]) {
            cnt++;
            idx = i;
        }
    }
    if (s[idx] == s[n - 1]) cnt++;
    cout << cnt;
    return 0;
}