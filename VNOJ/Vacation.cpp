#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n;
int a[100001][3], dp[100001][3];
int main(){
    IOS;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < 3; j++) cin >> a[i][j];
    }
    for (int i = 1; i <= n; i++){
        for (int j = 0; j < 3; j++){
            for (int k = 0; k < 3; k++){
                if (j!=k){
                    dp[i][j] = max(dp[i][j], a[i][j] + dp[i-1][k]);
                }
            }
        }
    }
    cout << max(dp[n][0], max(dp[n][1], dp[n][2])) << '\n';
    // system("pause");
    return 0;
}