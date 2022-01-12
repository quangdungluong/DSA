// https://cses.fi/problemset/task/1145
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, x;
int main(){
    IOS;
    cin >> n;
    vector<int> dp;
    for (int i = 0; i < n; i++){
        cin >> x;
        auto it = lower_bound(dp.begin(), dp.end(), x);
        if (it==dp.end()){
            dp.push_back(x);
        }
        else{
            *it = x;
        }
    }
    cout << dp.size() << '\n';
    // system("pause");
    return 0;
}