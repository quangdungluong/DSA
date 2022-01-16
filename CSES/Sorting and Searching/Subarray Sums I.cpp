// https://cses.fi/problemset/task/1660
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int mx = 2e5+10;
int n, x;
int a[mx];
int main(){
    IOS;
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = 0, sum = a[0], res = 0;
    while(r < n){
        if (sum == x) res++;
        if (r+1==n || sum + a[r+1] <= x){
            r++;
            sum += a[r];
        }
        else{
            sum -= a[l];
            l++;
        }
    }
    cout << res << '\n';
    // system("pause");
    return 0;
}