#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        ll s1 = 0, s2 = 0;
        for (int i = 1; i <= n / 2 - 1; i++) {
            s1 += (ll)pow(2, i);
        }
        s1 += (ll)pow(2, n);
        for (int i = n / 2; i <= n - 1; i++) {
            s2 += (ll)pow(2, i);
        }
        cout << abs(s1 - s2) << '\n';
    }
    return 0;
}