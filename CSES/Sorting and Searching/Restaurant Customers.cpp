// https://cses.fi/problemset/task/1619
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, a, b;
int main(){
    IOS;
    cin >> n;
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({a, 1});
        v.push_back({b, -1});
    }
    sort(v.begin(), v.end());
    int ans = 0, c = 0;
    for (auto x : v){
        c += x.second;
        ans = max(ans, c);
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}