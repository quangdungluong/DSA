#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        if (t == 1) a.push_back(i);
        if (t == 2) b.push_back(i);
        if (t == 3) c.push_back(i);
    }
    int cnt = min(a.size(), min(b.size(), c.size()));
    cout << cnt << "\n";
    if (cnt) {
        for (int i = 0; i < cnt; i++) {
            cout << a[i] << " " << b[i] << " " << c[i] << '\n';
        }
    }
    return 0;
}