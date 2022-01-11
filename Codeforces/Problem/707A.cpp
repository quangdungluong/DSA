#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    char s;
    bool check = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> s;
            if (s == 'M' || s == 'C' || s == 'Y') check = false;
        }
    }
    if (check) cout << "#Black&White\n";
    else cout << "#Color\n";
    return 0;
}