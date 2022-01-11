#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n;
    cin >> n;
    ll cnt = 0;
    vector<ll> a{ 100,20,10,5,1 };
    int idx = 0;
    while (n && idx < 5) {
        cnt += n / a[idx];
        n %= a[idx++];
    }
    cout << cnt;
    return 0;
}