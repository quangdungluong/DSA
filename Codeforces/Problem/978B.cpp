#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int curr = 0, cnt = 0;
    bool x = false;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'x') {
            curr++;
            x = true;
        }
        else {
            if (x) {
                cnt += (curr > 2) ? curr - 2 : 0;
                curr = 0;
                x = false;
            }
        }
    }
    cnt += (curr > 2) ? curr - 2 : 0;
    cout << cnt << '\n';
    return 0;
}