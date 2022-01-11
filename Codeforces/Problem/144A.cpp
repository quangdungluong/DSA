#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int max = INT_MIN, idx_max = 0;
    int min = INT_MAX, idx_min = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] > max) {
            max = v[i];
            idx_max = i;
        }
        if (v[i] <= min) {
            min = v[i];
            idx_min = i;
        }
    }
    if (idx_min < idx_max) {
        cout << idx_max + n - 1 - idx_min - 1;
    }
    else cout << idx_max + n - 1 - idx_min;
    return 0;
}