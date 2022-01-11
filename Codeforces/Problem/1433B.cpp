#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        int begin = -1, cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1 && begin == -1) {
                begin = i;
            }
            else if (a[i] == 1 && begin != -1) {
                cnt += i - begin - 1;
                begin = i;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}