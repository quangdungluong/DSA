#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    bool c = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (!c) {
            for (int j = 0; j < 4; j++) {
                if (a[i][j] == 'O' && a[i][j + 1] == 'O') {
                    c = true;
                    a[i][j] = a[i][j + 1] = '+';
                    break;
                }
            }
        }
    }
    if (c) {
        cout << "YES\n";
        for (auto x : a) cout << x << '\n';
    }
    else cout << "NO\n";
    return 0;

}