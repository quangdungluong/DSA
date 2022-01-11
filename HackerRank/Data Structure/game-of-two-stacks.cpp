#include <bits/stdc++.h>
using namespace std;

int g, n, m, maxSum;
int main() {
    cin >> g;
    while (g--) {
        cin >> n >> m >> maxSum;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        int i = 0, j = 0, curr = 0, count = 0;
        while (i < n && curr + a[i] <= maxSum) {
            curr += a[i];
            i++;
        }
        count = i;
        while (j < m && i >= 0) {
            curr += b[j++];
            while (curr > maxSum && i > 0) {
                curr -= a[--i];
            }
            if (curr <= maxSum && i + j > count) {
                count = i + j;
            }
        }
        cout << count << endl;
    }
    return 0;
}