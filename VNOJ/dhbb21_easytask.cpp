// https://oj.vnoi.info/problem/dhbb21_easytask
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int mx = 1e6+1;
int n;
ll a[mx];
vector<ll> sieve(int n){
    vector<ll> v;
    bool p[n+1];
    memset(p, true, sizeof(p));
    for (int i = 2; i <= n; i++){
        if (p[i]){
            v.push_back(i);
            for (int j = i*i; j <= n; j += i) p[j] = false;
        }
    }
    return v;
}
int main(){
    IOS;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        a[i] += a[i-1];
    }
    vector<ll> v = sieve(n);
    ll ans = -1e10;
    for (int i = 0; i < v.size(); i++){
        for (int j = i; j < v.size(); j++){
            ans = max(ans, a[v[j]]-a[v[i]-1]);
        }
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}