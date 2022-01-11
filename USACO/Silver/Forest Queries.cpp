#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n, q, xa, ya, xb, yb;
string row;
int main() {
    IOS;
    cin >> n >> q;
    int a[n + 1][n + 1];
    for (int i = 0; i <= n; i++) {
        a[i][0] = 0;
        a[0][i] = 0;
    }
    for (int i = 1; i <= n; i++) {
        cin >> row;
        for (int j = 1; j <= n; j++) {
            a[i][j] = (row[j - 1] == '*') + a[i][j - 1] + a[i - 1][j] - a[i - 1][j - 1];
        }
    }
    for (int i = 0; i < q; i++) {
        cin >> ya >> xa >> yb >> xb;
        int ans = a[yb][xb] - a[yb][xa - 1] - a[ya - 1][xb] + a[ya - 1][xa - 1];
        cout << ans << '\n';
    }
    // system("pause");
    return 0;
}