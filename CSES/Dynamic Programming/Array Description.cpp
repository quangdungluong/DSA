// https://cses.fi/problemset/task/1746
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int d = 1e9+7;
const int mx = 1e5+1;
int n, m;
int x[mx];
int dp[mx][101];
// dp[i][j]: number of arrays up to index i and end with value j
int main(){
    IOS;
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> x[i];
    if (x[0]){
        dp[0][x[0]] = 1;
    }
    else{
        for (int i = 1; i <= m; i++) dp[0][i] = 1;
    }
    for (int i = 1; i < n; i++){
        if (x[i]){
            for (int j : {x[i]-1, x[i], x[i]+1}){
                if (j>=1 && j<=m) dp[i][x[i]] = (dp[i][x[i]] + dp[i-1][j])%d;
            }
        }
        else{
            for (int j = 1; j <= m; j++){
                for (int k : {j-1, j, j+1}){
                    if (k >= 1 && k <= m) dp[i][j] = (dp[i][j] + dp[i-1][k])%d;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= m; i++){
        ans = (ans + dp[n-1][i])%d;
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}