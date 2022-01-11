#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int digit = n % 10;
        int number = 0, sum = 0;
        while (n) {
            n /= 10;
            number++;
        }
        for (int i = 1; i <= number; i++) {
            sum += i;
        }
        cout << (digit - 1) * 10 + sum << '\n';
    }
    return 0;
}