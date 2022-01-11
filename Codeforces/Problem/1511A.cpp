#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, r;
    cin >> t;
    while (t--) {
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> r;
            if (r == 1 || r == 3) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}