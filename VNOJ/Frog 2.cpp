#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n, k;
int a[100001], dp[100001];
int main(){
    IOS;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 1; i < n; i++){
        dp[i] = 1e9;
        for (int j=max(0, i-k); j<i; j++){
            dp[i] = min(dp[i], dp[j]+abs(a[i]-a[j]));
        }
    }
    cout << dp[n-1] << '\n';
    // system("pause");
    return 0;
}