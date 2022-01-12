// https://cses.fi/problemset/task/1634
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int mx = 1e6+1;
int n,x;
int c[101];
int dp[mx];
int main(){
    IOS;
    cin >> n >> x;
    for (int i = 0; i < n; i++) cin >> c[i];
    for (int i = 1; i <= x; i++){
        dp[i] = 1e9;
        for (int j = 0; j < n; j++){
            if (i >= c[j]) dp[i] = min(dp[i], 1+dp[i-c[j]]);
        }
    }
    if (dp[x]==1e9) cout << "-1\n";
    else cout << dp[x] << '\n';
    // system("pause");
    return 0;
}