#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int t,n,m,k;
int dp[51][51][51];
int solve(int n, int m, int k){
    if (n*m==k || k==0) return 0;
    if (dp[n][m][k]) return dp[n][m][k];
    dp[n][m][k] = 1e8;
    for (int i = 1; i <= n-i; i++){
        for (int j = 0; j <= k; j++){
            dp[n][m][k] = min(dp[n][m][k], m*m + solve(i, m, k-j) + solve(n-i, m, j));
        }
    }
    for (int i = 1; i <= m-i; i++){
        for (int j = 0; j <= k; j++){
            dp[n][m][k] = min(dp[n][m][k], n*n + solve(n, i, j) + solve(n, m-i, k-j));
        }
    }
    return dp[n][m][k];

}
int main(){
    IOS;
    cin >> t;
    while(t--){
        cin >> n >> m >> k;
        cout << solve(n, m, k) << '\n';
    }
    // system("pause");
    return 0;
}