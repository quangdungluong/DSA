// https://cses.fi/problemset/task/1621
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
    for(int i = 0; i < n ; i++) cin >> a[i];
    sort(a, a+n);
    int ans = 1;
    for (int i = 1; i < n; i++) ans += (a[i]!=a[i-1]);
    cout << ans << '\n';
    // system("pause");
    return 0;
}