// https://cses.fi/problemset/task/1637
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int mx = 1e6+1;
int n;
int dp[mx];
int main(){
    IOS;
    cin >> n;
    for (int i = 1; i <= n; i++){
        dp[i] = 1e9;
        int j = i;
        while(j){
            dp[i] = min(dp[i], 1+dp[i-j%10]);
            j /= 10;
        }
    }
    cout << dp[n] << '\n';
    // system("pause");
    return 0;
}