#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
int main() {
    int a, b, n;
    cin >> a >> b >> n;
    bool c = 1;//1: Simon turn 0: Ant turn
    while (1) {
        if (c) {
            int tmp = gcd(a, n);
            n -= tmp;
            c = 0;
        }
        else {
            int tmp = gcd(b, n);
            n -= tmp;
            c = 1;
        }
        if (n == 0) {
            cout << c << '\n';
            break;
        }
    }
    return 0;
}