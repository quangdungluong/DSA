// https://cses.fi/problemset/task/1636
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n,x;
const int d = 1e9+7;
int main(){
    IOS;
    cin >> n >> x;
    int c[n], dp[x+1];
    for (int i = 0; i < n; i++) cin >> c[i];
    memset(dp, 0, sizeof(dp));
    dp[0]= 1;
    for (auto i : c){
        for (int j = i; j <= x; j++){
            dp[j] = (dp[j] + dp[j-i])%d;
        }
    }
    cout << dp[x] << '\n';
    // system("pause");
    return 0;
}