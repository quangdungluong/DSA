#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()
#define ll long long
#define ld long double

int main() {
    IOS;
    int t, n, m, x, w;
    cin >> t;
    while(t--){
        cin >> n >> m;
        vector<pair<int, int>> v;
        unordered_map<int, int> mp;
        set<int> p;
        int sum = 0;
        for (int i = 0; i < m; i++){
            cin >> x >> w;
            sum += w;
            v.push_back({w, x});
            mp[x] = i+1;
            p.insert(x);
        }
        sort(v.rbegin(), v.rend());
        for (int i = 0; i < m-2*n; i++){
            sum -= v[i].first;
            p.erase(v[i].second);
        }
        vector<int> points(p.begin(), p.end());
        cout << sum << '\n';
        for (int i = 0; i < n; i++){
            cout << mp[points[i]] << ' ' << mp[points[2*n-i-1]] << '\n';
        }
        cout << '\n';

    }
    // system("pause");
    return 0;
}