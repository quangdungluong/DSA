#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, q;
    int cnt = 0;
    cin >> n;
    while (n--) {
        cin >> p >> q;
        cnt += (q - p >= 2);
    }
    cout << cnt;
    return 0;
}