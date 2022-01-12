// https://cses.fi/problemset/task/1643
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int main(){
    IOS;
    int n, x;
    ll c = 0, ans = -INT_MAX;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x;
        c += x;
        ans = max(ans, c);
        if (c<0) c = 0;
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}