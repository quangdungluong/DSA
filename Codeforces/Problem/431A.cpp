#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<ll> v{ a,b,c,d };
    string s;
    cin >> s;
    ll ans = 0;
    for (auto x : s) {
        ans += v[x - '1'];
    }
    cout << ans << '\n';
    return 0;
}