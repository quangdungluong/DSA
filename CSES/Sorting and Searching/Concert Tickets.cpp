// https://cses.fi/problemset/task/1091
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, m, h;
int main(){
    IOS;
    cin >> n >> m;
    set<pair<int,int>> s;
    for (int i = 0; i < n; i++){
        cin >> h;
        s.insert({-h, i});
    }
    for (int i = 0; i < m; i++){
        cin >> h;
        auto it = s.lower_bound({-h, -1});
        if (it == s.end()) cout << "-1\n";
        else{
            cout << -it->first << '\n';
            s.erase(it);
        }
    }
    // system("pause");
    return 0;
}