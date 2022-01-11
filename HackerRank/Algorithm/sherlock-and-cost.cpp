#include <bits/stdc++.h>
using namespace std;

int t, n;
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> b(n);
        for (int i = 0; i < n; i++) cin >> b[i];
        int L[n]; //max cost using first i items, ending with 1 at pos i_th
        int H[n]; //max cost using first i items, ending with B[i] at pos i_th
        memset(L, 0, sizeof(L));
        memset(H, 0, sizeof(H));
        for (int i = 1; i < n; i++) {
            L[i] = max(L[i - 1], H[i - 1] + abs(b[i - 1] - 1));
            H[i] = max(H[i - 1] + abs(b[i] - b[i - 1]), L[i - 1] + abs(1 - b[i]));
        }
        cout << max(L[n - 1], H[n - 1]) << endl;
    }
    return 0;
}