#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    k = 240 - k;
    while (n > 0) {
        if (n * (n + 1) / 2 * 5 <= k) break;
        n--;
    }
    cout << n << '\n';
    return 0;
}