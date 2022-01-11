#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll t, n, a;
    cin >> t;
    while (t--) {
        cin >> n;
        set<ll> s;
        for (int i = 0; i < n;i++) {
            cin >> a;
            s.insert(a);
        }
        cout << s.size() << '\n';
    }
    return 0;
}