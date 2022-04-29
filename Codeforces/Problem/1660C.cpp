#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()
#define ll long long
#define ld long double

int main() {
    IOS;
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        vector<bool> vis(26, false);
        int res = 0;
        for (auto x : s){
            if (vis[x-'a']){
                res += 2;
                vis = vector<bool>(26, false);
            }
            else{
                vis[x-'a'] = true;
            }
        }
        cout << s.size() - res << '\n';
    }
    // system("pause");
    return 0;
}