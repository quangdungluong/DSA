#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, k;
const ll mx = 1e10+1e5+1;
int a[100001];
int main(){
    IOS;
    cin >> n >> k;
    vector<ll> v;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++){
        ll x = 0;
        for (int j = i; j < n; j++){
            x += a[j];
            v.push_back(x);
        }
    }
    sort(v.rbegin(), v.rend());
    cout << v[k-1];
    // system("pause");
    return 0;
}