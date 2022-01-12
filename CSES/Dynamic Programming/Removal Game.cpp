// https://cses.fi/problemset/task/1097
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n;
ll a[5001];
ll dp[5001][5001];
int main(){
    IOS;
    cin >> n;
    ll sum = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    for (int l = n-1; l >=0; l--){
        for (int r = l; r < n; r++){
            if (l==r) dp[l][r] = a[l];
            else{
                dp[l][r] = max(a[l]-dp[l+1][r], a[r]-dp[l][r-1]);
            }
        }
    }
    cout << (dp[0][n-1]+sum)/2 << '\n';
    // system("pause");
    return 0;
}