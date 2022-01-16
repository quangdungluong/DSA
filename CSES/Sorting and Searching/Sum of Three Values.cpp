// https://cses.fi/problemset/task/1641
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, x, a;
vector<pair<int, int>> v;
int main(){
    IOS;
    cin >> n >> x;
    for (int i = 0; i < n; i++){
        cin >> a;
        v.push_back({a, i+1});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n-2; i++){
        int sum = x - v[i].first;
        int l = i+1, r = n-1;
        while(l < r){
            if (v[l].first + v[r].first == sum){
                cout << v[i].second << ' ' << v[l].second << ' ' << v[r].second << '\n';
                return 0;
            }
            else if (v[l].first + v[r].first > sum) r--;
            else l++;
        }
    }
    cout << "IMPOSSIBLE\n";
    // system("pause");
    return 0;
}