#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, t;
    cin >> n;
    while (n--) {
        cin >> t;
        if (t % 2) {
            cout << t / 2 << '\n';
        }
        else cout << t / 2 - 1 << "\n";
    }
    return 0;
}