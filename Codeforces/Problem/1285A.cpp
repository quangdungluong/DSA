#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt_L = 0, cnt_R = 0;
    for (auto x : s) {
        if (x == 'L') cnt_L++;
        else cnt_R++;
    }
    cout << cnt_L + cnt_R + 1 << '\n';
    return 0;
}