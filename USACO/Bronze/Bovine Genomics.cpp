#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector<string> a(2 * n);
    for (int i = 0; i < 2 * n; i++) cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < m; i++) {
        bool valid = false;
        for (int j = 0; j < n; j++) {
            for (int k = n; k < 2 * n; k++) {
                if (a[j][i] == a[k][i]) valid = true;
            }
        }
        cnt += (!valid);
    }
    cout << cnt;
    system("pause");
    return 0;
}