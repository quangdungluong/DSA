#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        if (n <= 2) cout << 1;
        else {
            cout << (int)ceil((double)(n - 2) / x) + 1;
        }
        cout << '\n';
    }
    return 0;
}