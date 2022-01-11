#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        vector<int> b(50, 0);
        for (int i = 0; i < n; i++) cin >> a[i];
        int cnt = 0;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (!b[a[j] - a[i]]++) cnt++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}