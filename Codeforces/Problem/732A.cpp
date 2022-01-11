#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    k = k % 10;
    for (int i = 1; i <= 10; i++) {
        int tmp = k * i;
        if (tmp % 10 == 0 || tmp % 10 == r) {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}