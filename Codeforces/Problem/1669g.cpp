#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        for (int i = 0; i < m; i++){
            string s = "";
            for (int j = n-1; j >= 0; j--){
                if (v[j][i]=='o'){
                    int siz = s.size()+1;
                    for (int k = 0; k < n-j-siz; k++) s = "." + s;
                    s = "o" + s;
                }
                if (v[j][i]=='*') s = "*" + s;
            }
            int siz = s.size();
            for (int k = 0; k < (n-siz); k++) s = "." + s;
            for (int j = 0; j < n; j++) v[j][i] = s[j];
        }
        // cout << '\n';
        for (auto x : v){
            cout << x << '\n';
        }
    }
    // system("pause");
    return 0;
}