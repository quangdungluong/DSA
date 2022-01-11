#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> x(n, 0);
    vector<int> y(n, 0);
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> y[i];
    int ans = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = max(ans, int(pow((x[i] - x[j]), 2) + pow((y[i] - y[j]), 2)));
        }
    }
    cout << ans << '\n';
    return 0;
}