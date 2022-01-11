#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int mx = 3001;
string s, t;
int dp[mx][mx];
int main(){
    IOS;
    cin >> s >> t;
    int m = s.size(), n = t.size();
    for (int i = 0; i <= m; i++){
        for (int j = 0; j <= n; j++){
            if (i==0 || j==0) dp[i][j]=0;
            else if (s[i-1]==t[j-1]) dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    int i = m, j = n;
    string lcs = "";
    while(i>0 && j>0){
        if (s[i-1]==t[j-1]){
            lcs = s[i-1] + lcs;
            i--; j--;
        }
        else if (dp[i-1][j] > dp[i][j-1]) i--;
        else j--;
    }
    cout << lcs << '\n';
    // system("pause");
    return 0;
}