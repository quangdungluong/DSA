#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, h, m;
    cin >> t;
    while (t--) {
        cin >> h >> m;
        cout << (24 - h - 1) * 60 + (60 - m) << '\n';
    }
    return 0;
}