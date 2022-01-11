#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, x, d, cnt = 0;
    char c;
    cin >> n >> x;
    while (n--) {
        cin >> c >> d;
        if (c == '+') {
            x += d;
        }
        else {
            if (x < d) cnt++;
            else x -= d;
        }
    }
    cout << x << " " << cnt << '\n';
    return 0;
}