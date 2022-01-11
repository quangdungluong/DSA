#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const ll d = 1e9+7;
int H,W;
string s[1001];
ll dp[1001][1001] = {};
int main(){
    IOS;
    cin >> H >> W;
    for (int i = 0; i < H; i++) cin >> s[i];
    dp[0][0] = 1;
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            if (s[i][j]=='.'){
                if (i>0) dp[i][j] += dp[i-1][j];
                if (j>0) dp[i][j] += dp[i][j-1];
                dp[i][j] %= d;
            }
        }
    }
    cout << dp[H-1][W-1] << '\n';
    // system("pause");
    return 0;
}