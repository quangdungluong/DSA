#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, a;
    cin >> n >> h;
    int w = 0;
    while (n--) {
        cin >> a;
        w += 1 + (a > h);
    }
    cout << w;
    return 0;
}