#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    set<ll> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    cout << 4 - s.size();
    return 0;
}