// https://cses.fi/problemset/task/2183
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int mx = 2e5+1;
int n;
int main(){
    IOS;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    ll res = 1;
    // The smallest element that can not be represented by elements at indexes from 0 to (i-1) be 'res'
    // If element i > res -> res is final result
    // Else: res += a[i]
    // If elements from 0 to (i-1) can represent from 1 to (res-1), then 0 to (i) can represent from 1 to (res+a[i]-1)
    for (int i = 0; i < n && res >= a[i]; i++){
        res += a[i];
    }
    cout << res << '\n';
    // system("pause");
    return 0;
}