#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int q, x;
ll k, v;
int main() {
    cin >> q;
    map<ll, ll> mp;
    while (q--) {
        cin >> x >> k;
        if (x == 0) {
            cin >> v;
            mp[k] = v;
        }
        else {
            cout << mp[k] << '\n';
        }
    }
    system("pause");
    return 0;
}