#include <bits/stdc++.h>
using namespace std;

long t, a, b, c;
long x, y;
int main() {
    cin >> t;
    while (t--) {
        cin >> a >> b >> c;
        if (a == c || b == c) {
            x = pow(10, a - 1);
            y = pow(10, b - 1);
        }
        else if (a == b) {
            long tmp = pow(10, c - 1) + 1;
            long tmp1 = pow(10, a - 1);
            long i = (tmp1 / tmp) + 1;
            x = tmp * i;
            y = tmp * (i + 1);
        }
        else {
            long tmp = pow(10, c - 1) + 1;
            long tmp1 = pow(10, a - 1);
            long tmp2 = pow(10, b - 1);
            long i = (tmp1 / tmp) + 1;
            long j = (tmp2 / tmp) + 1;
            if (a < b) {
                long k = (j / i) + 1;
                j = k * i + 1;
                x = tmp * i;
                y = tmp * j;
            }
            else {
                long k = (i / j) + 1;
                i = k * j + 1;
                x = tmp * i;
                y = tmp * j;
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}