#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, k;
int a[101];
bool dp[100001];
int main(){
    IOS;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i <= k; i++){
        for (int j = 0; j < n; j++){
            if (i >= a[j] && !dp[i-a[j]]) dp[i] = 1;
        }
    }
    cout << (dp[k] ? "First" : "Second") << '\n';
    // system("pause");
    return 0;
}