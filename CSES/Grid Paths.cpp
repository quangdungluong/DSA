// https://cses.fi/problemset/task/1638
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int d = 1e9+7;
int n;
string s[1001];
int dp[1001][1001];
int main(){
    IOS;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> s[i];
    if (s[0][0]=='.') dp[0][0] = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (s[i][j]=='.'){
                if (i) dp[i][j] += dp[i-1][j];
                if (j) dp[i][j] += dp[i][j-1];
                dp[i][j] %= d;
            }
        }
    }
    cout << dp[n-1][n-1] << '\n';
    // system("pause");
    return 0;
}