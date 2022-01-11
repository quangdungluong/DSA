#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string a, b;
    cin >> n >> a >> b;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += min(abs(a[i] - b[i]), 10 - abs(a[i] - b[i]));
    }
    cout << cnt << '\n';
    return 0;
}