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
        int n;
        cin >> n;
        string s;
        unordered_map<string, int> m;
        long long res = 0;
        for (int i = 0; i < n; i++){
            cin >> s;
            res += m[s];
            for (char c = 'a'; c <= 'k'; c++){
                if (c != s[0]){
                    string x = s;
                    x[0] = c;
                    m[x]++;
                }
                if (c != s[1]){
                    string x  = s;
                    x[1] = c;
                    m[x]++;
                }
            }
        }
        cout << res << '\n';
    }
    // system("pause");
    return 0;
}