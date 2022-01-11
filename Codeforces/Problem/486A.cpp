#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;
    if (n % 2) {
        cout << n / 2 - n << '\n';
    }
    else cout << n / 2 << '\n';
    return 0;
}