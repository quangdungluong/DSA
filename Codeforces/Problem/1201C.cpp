// https://codeforces.com/contest/1201/problem/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()
#define ll long long

const ll inf = (ll)2e9;
int main() {
    IOS;
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    sort(all(a));
    ll mid = n / 2, cur = a[mid];
    for (ll i = mid + 1; i <= n; i++) {
        ll gap = (i == n) ? inf : a[i] - cur;
        ll add = min(gap, k / (i - mid));
        cur += add;
        k -= add * (i - mid);
    }
    cout << cur << '\n';
    // system("pause");
    return 0;
}