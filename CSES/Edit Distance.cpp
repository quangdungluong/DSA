// https://cses.fi/problemset/task/1639
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

string n,m;
int dp[5001][5001];
int main(){
    IOS;
    cin >> n >> m;
    for (int i = 0; i <= n.size(); i++){
        for (int j = 0; j <= m.size(); j++){
            if (i==0 || j==0) dp[i][j] = i+j;
            else if (n[i-1]==m[j-1]) dp[i][j] = dp[i-1][j-1];
            else{
                dp[i][j] = 1 + min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1]));
            }
        }
    }
    cout << dp[n.size()][m.size()] << '\n';
    // system("pause");
    return 0;
}