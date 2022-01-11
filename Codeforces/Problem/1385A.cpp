#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll t, x, y, z, a, b, c;
    cin >> t;
    while (t--) {
        cin >> x >> y >> z;
        vector<ll> v{ x,y,z };
        sort(v.rbegin(), v.rend());
        if (v[0] != v[1]) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            cout << v[1] << " " << v[2] << " " << v[2] << '\n';
        }
    }
    return 0;
}