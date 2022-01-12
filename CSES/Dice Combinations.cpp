// https://cses.fi/problemset/task/1633
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int d = 1e9+7;
const int mx = 1e6+1;
int dp[mx];
int n;
int main(){
    IOS;
    cin >> n;
    dp[0] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= 6; j++){
            if (i>=j) dp[i] =(dp[i]%d+dp[i-j]%d)%d;
        }
    }
    cout << dp[n] << '\n';
    // system("pause");
    return 0;
}