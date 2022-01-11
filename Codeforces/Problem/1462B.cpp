#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t, n;
    string s;
    cin >> t;
    while (t--) {
        cin >> n >> s;
        bool c = false;
        for (int i = 0; i <= 4; i++) {
            if (s.substr(0, i) + s.substr(n - 4 + i) == "2020") c = true;
        }
        if (c) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}