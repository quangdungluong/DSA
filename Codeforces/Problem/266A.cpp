#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int cnt = 0;
    int idx = 0;
    for (int i = 1; i < n;i++) {
        if (s[i] == s[idx]) {
            cnt++;
        }
        else {
            idx = i;
        }
    }
    cout << cnt << '\n';
    return 0;
}