#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int N;
double p[3000] = {};
double dp[3000][3000] = {}; //dp[i][j]: probability has j heads after i coins
int main(){
    IOS;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> p[i];
    dp[0][0] = 1;
    for (int i = 1; i <= N; i++){
        for (int j = 0; j <= i; j++){
            if (j > 0) dp[i][j] = dp[i-1][j-1]*p[i-1];
            dp[i][j] += dp[i-1][j]*(1-p[i-1]);
        }
    }
    double sum = 0;
    for (int i = N/2+1; i <= N; i++) sum += dp[N][i];
    cout << fixed << setprecision(12) << sum << '\n';
    // system("pause");
    return 0;
}