#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    vector<int> v(n);
    vector<int> ans(n);
    for (int i = 0;i < n;i++) {
        cin >> x;
        v[i] = x;
        ans[x - 1] = i + 1;
    }
    for (int i = 0;i < n;i++) {
        cout << ans[i] << " ";
    }
    return 0;
}