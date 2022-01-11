#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n > 30) {
            if (n - 30 == 6) {
                cout << "YES\n";
                cout << "6 10 15 5\n";
            }
            else if (n - 30 == 10) {
                cout << "YES\n";
                cout << "5 6 14 15\n";
            }
            else if (n - 30 == 14) {
                cout << "YES\n";
                cout << "6 10 13 15\n";
            }
            else cout << "YES\n6 10 14 " << n - 30 << '\n';
        }
        else cout << "NO\n";
    }
    return 0;
}