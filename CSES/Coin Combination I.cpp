// https://cses.fi/problemset/task/1635
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int d = 1e9+7;
const int mx = 1e6+1;
int n, x;
int main(){
    IOS;
    cin >> n >> x;
    int c[n], dp[x+1];
    for (int i = 0; i < n; i++) cin >> c[i];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for (int i = 1; i <= x; i++){
        for (int j = 0; j < n; j++){
            if (i >= c[j]) dp[i] = (dp[i] + dp[i-c[j]])%d;
        }
    }
    cout << dp[x] << '\n';
    // system("pause");
    return 0;
}