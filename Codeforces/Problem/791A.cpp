#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll a, b;
    cin >> a >> b;
    ll year = 0;
    while (a <= b) {
        year++;
        a *= 3;
        b *= 2;
    }
    cout << year << '\n';
    return 0;
}