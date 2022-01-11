#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    int m = 0, curr = 0;
    while (n--) {
        cin >> a >> b;
        curr += b - a;
        m = max(m, curr);
    }
    cout << m << '\n';
    return 0;
}