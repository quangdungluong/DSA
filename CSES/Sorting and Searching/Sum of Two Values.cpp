// https://cses.fi/problemset/task/1640
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, x, a;
int main(){
    IOS;
    cin >> n >> x;
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++){
        cin >> a;
        v.push_back({a, i});
    }
    sort(v.begin(), v.end());
    int i = 0, j = n-1;
    while(i < j){
        if (v[i].first+v[j].first==x){
            cout << v[i].second << ' ' << v[j].second << '\n';
            break;
        }
        else if (v[i].first+v[j].first>x){
            j--;
        }
        else i++;
    }
    if (i >= j) cout << "IMPOSSIBLE\n";
    // system("pause");
    return 0;
}