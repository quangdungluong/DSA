#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        bool c = true;
        for (int i = 1; i < n; i++) {
            if (v[i] - v[i - 1] > 1) {
                c = false;
                break;
            }
        }
        if (c) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}