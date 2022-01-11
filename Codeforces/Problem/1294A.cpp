#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll t, a, b, c, n;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> n;
        ll sum = a + b + c + n;
        bool check = true;
        if (sum % 3) check = false;
        else {
            if (a > sum / 3 || b > sum / 3 || c > sum / 3) check = false;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}