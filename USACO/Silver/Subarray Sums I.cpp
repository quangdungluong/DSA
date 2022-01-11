#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

int n, x, a;
ll curr = 0;
int main() {
    IOS;
    cin >> n >> x;
    int ans = 0;
    map<ll, ll> mp;
    mp[0] = 1;
    for (int i = 0; i < n;i++) {
        cin >> a;
        curr += a;
        if (mp.count(curr - x)) {
            ans += mp[curr - x];
        }
        mp[curr]++;
    }
    cout << ans << '\n';
    return 0;
}