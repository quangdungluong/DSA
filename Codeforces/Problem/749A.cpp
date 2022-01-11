#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n / 2 << '\n';
    for (int i = 1; i <= n / 2 - 1; i++) {
        cout << 2 << " ";
    }
    if (n % 2) {
        cout << 3;
    }
    else {
        cout << 2;
    }
    return 0;
}