#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, y;
    cin >> n >> k;
    int cnt = 0;
    for (int i = 0; i < n;i++) {
        cin >> y;
        cnt += (y <= 5 - k);
    }
    cout << cnt / 3;
    return 0;
}