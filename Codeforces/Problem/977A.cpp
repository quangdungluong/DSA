#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, k;
    cin >> n >> k;
    while (k--) {
        if (n % 10) {
            --n;
        }
        else {
            n /= 10;
        }
    }
    cout << n << '\n';
    return 0;
}