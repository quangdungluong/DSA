#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

const ll maxW = 1e18;
const int maxV = 1e5+1;
int N, W;
int w[101], v[101];

ll dp[maxV];
int main(){
    IOS;
    cin >> N >> W;
    for (int i = 0; i < N; i++) cin >> w[i] >> v[i];
    for (int i = 0; i < maxV; i++) dp[i] = maxW;
    dp[0] = 0;
    for (int i = 0; i < N; i++){
        for (int j = maxV-1; j>=0; j--){
            if (dp[j]+w[i]<=W){
                dp[j+v[i]] = min(dp[j+v[i]], w[i]+dp[j]);
            }
        }
    }
    for (int i = maxV-1; i>=0; i--){
        if (dp[i]!=maxW){
            cout << i << '\n';
            break;
        }
    }
    // system("pause");
    return 0;
}