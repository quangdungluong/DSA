#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n;
    cin >> n >> k;
    vector<int> scores(n);
    for (int i = 0; i < n; i++) cin >> scores[i];
    int tmp = scores[k - 1];
    int ans;
    if (tmp) {
        ans = k;
        for (int i = k;i < n;i++) {
            if (scores[i] >= tmp) ans++;
            else break;
        }
    }
    else {
        ans = 0;
        for (int i = 0; i < k;i++) {
            if (scores[i] > 0) ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}