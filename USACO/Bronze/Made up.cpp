#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    cin >> n;
    vector<int> a(n), b(n), c(n);
    map<int, int> m1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m1[a[i]]++;
    }
    map<int, int> m2;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        if (m1.count(b[i])) {
            m2[i + 1] += m1[b[i]];
        }
    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        if (m2.count(c[i])) ans += m2[c[i]];
    }
    cout << ans << '\n';
    return 0;
}