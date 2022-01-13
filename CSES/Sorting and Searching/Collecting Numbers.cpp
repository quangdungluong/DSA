// https://cses.fi/problemset/task/2216
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, x;
int main(){
    IOS;
    cin >> n;
    vector<pair<int, int>> a;
    for (int i = 0; i < n; i++){
        cin >> x;
        a.push_back({x, i});
    }
    sort(a.begin(), a.end());
    int cnt = 1, l = 0;
    for (auto i : a){
        if (l > i.second) cnt++;
        l = i.second;
    }
    cout << cnt << '\n';
    // system("pause");
    return 0;
}