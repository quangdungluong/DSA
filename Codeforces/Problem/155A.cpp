#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    int cnt = 0;
    cin >> x;
    int max = x, min = x;
    while (n-- > 1) {
        cin >> x;
        if (x > max) {
            cnt++;
            max = x;
        }
        if (x < min) {
            cnt++;
            min = x;
        }
    }
    cout << cnt;
    return 0;
}