// https://cses.fi/problemset/task/1744
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, m;
int dp[501][501];
int main(){
    IOS;
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if (i==1 || j==1) dp[i][j] = abs(i-j);
            else if (i==j) dp[i][j] = 0;
            else{
                dp[i][j]=1e9;
                for (int k = 1; k <= i-1; k++) dp[i][j] = min(dp[i][j], 1+dp[i-k][j]+dp[k][j]);
                for (int k = 1; k <= j-1; k++) dp[i][j] = min(dp[i][j], 1+dp[i][j-k]+dp[i][k]);
            }
        }
    }
    cout << dp[n][m] << '\n';
    // system("pause");
    return 0;
}