// https://cses.fi/problemset/task/1074
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int mx = 2e5+1;
int n;
int a[mx];
int main(){
    IOS;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    ll ans = 0;
    for (int i = 0; i < n; i++){
        ans += abs(a[i]-a[n/2]);
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}