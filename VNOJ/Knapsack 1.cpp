#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int maxW = 1e5+1;
int N,W;
int w[101], v[101];
long long dp[101][maxW];
int main(){
    IOS;
    cin >> N >> W;
    for (int i = 1; i <= N; i++) cin >> w[i] >> v[i];
    memset(dp, 0, sizeof(dp));
    for (int i = 1; i <= N; i++){
        for (int j = 1; j <= W; j++){
            if (w[i] <= j){
                dp[i][j] = max(dp[i-1][j], v[i]+dp[i-1][j-w[i]]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[N][W] << '\n';
    // system("pause");
    return 0;
}