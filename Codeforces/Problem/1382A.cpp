#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<int> a(n);
        vector<int> b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int i = 0, j = 0;
        bool c = false;
        while (i < n && j < m) {
            if (a[i] == b[j]) {
                c = true;
                cout << "YES\n";
                cout << 1 << " " << a[i] << '\n';
                break;
            }
            else if (a[i] > b[j]) j++;
            else i++;
        }
        if (!c) cout << "NO\n";
    }
    return 0;
}