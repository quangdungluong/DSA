#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n;
int a[100001], dp[100001];
int main(){
    IOS;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    dp[0] = 0;
    dp[1] = abs(a[1]-a[0]);
    for (int i = 2; i < n; i++){
        dp[i] = min(dp[i-1]+abs(a[i]-a[i-1]), dp[i-2]+abs(a[i]-a[i-2]));
    }
    cout << dp[n-1] << '\n';
    // system("pause");
    return 0;
}