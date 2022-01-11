#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, x;
    cin >> n;
    ll curr = 0;
    ll cnt = 0;
    while (n--) {
        cin >> x;
        if (x != -1) {
            curr += x;
        }
        else {
            if (curr == 0) cnt++;
            else curr--;
        }
    }
    cout << cnt << '\n';
    return 0;
}