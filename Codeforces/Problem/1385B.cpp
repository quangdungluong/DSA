#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t, x;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n + 1, 0);
        vector<int> ans;
        for (int i = 0; i < 2 * n; i++) {
            cin >> x;
            if (!a[x]++) ans.push_back(x);
        }
        for (auto i : ans) {
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}