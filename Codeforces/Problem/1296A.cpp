#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, x;
    cin >> t;
    while (t--) {
        cin >> n;
        bool a = false, b = false;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x % 2) a = true;
            else b = true;
        }
        if ((a == true && b == true) || (b == false && n % 2)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}