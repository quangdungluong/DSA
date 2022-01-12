// https://cses.fi/problemset/task/1093
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int d = 1e9+7;
int n;
int main(){
    IOS;
    cin >> n;
    if (n%4!=3 && n%4!=0) cout << "0\n";
    else{
        int sum = n*(n+1)/4;
        int dp[sum+1];
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        // only using 1 to n-1, otherwise it will count subsets twice
        for (int i = 1; i < n; i++){
            for (int j = sum; j >= i; j--){
                dp[j] = (dp[j]%d + dp[j-i]%d)%d;
            }
        }
        cout << dp[sum] << '\n';
    }
    // system("pause");
    return 0;
}