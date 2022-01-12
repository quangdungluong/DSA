// https://cses.fi/problemset/task/1745
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n;
int x[101], dp[100001];
int main(){
    IOS;
    cin >> n;
    for (int i = 0; i < n ; i++) cin >> x[i];
    int s = accumulate(x, x+n, 0);
    dp[0] = 1;
    for (int i = 0; i < n; i++){
        for (int j = s; j >= x[i]; j--){
            dp[j] = dp[j] | dp[j-x[i]];
        }
    }
    vector<int> v;
    for (int i = 1; i <= s; i++){
        if (dp[i]) v.push_back(i);
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for (auto i : v) cout << i << ' ';
    // system("pause");
    return 0;
}