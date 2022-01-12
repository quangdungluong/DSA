// https://cses.fi/problemset/task/1629
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, a, b;
int main(){
    IOS;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        v.push_back({b,a});
    }
    sort(v.begin(), v.end());
    int ans = 1, c = 0;
    for (int i = 1; i < n; i++){
        if (v[i].second >= v[c].first){
            ans += 1;
            c = i;
        }
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}