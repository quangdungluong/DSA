// https://cses.fi/problemset/task/1084/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    IOS;
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0, res = 0;
    while (i < n && j < m) {
        if (b[j] - k <= a[i] && a[i] <= b[j] + k) {
            i++; j++; res++;
        }
        else if (b[j] > a[i]) i++;
        else j++;
    }
    cout << res << '\n';
    // system("pause");
    return 0;
}
