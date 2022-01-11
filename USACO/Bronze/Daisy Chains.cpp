#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {
                sum += a[k];
            }
            for (int k = i; k <= j; k++) {
                if (a[k] * (j - i + 1) == sum) {
                    cnt++;
                    break;
                }
            }
        }
    }
    cout << cnt;
    system("pause");
    return 0;
}