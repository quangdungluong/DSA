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
        string s;
        cin >> n >> s;
        if (n < 2){
            if (s=="W") cout << "YES\n";
            else cout << "NO\n";
        }
        else{
            int b = 0, r = 0;
            bool res = true;
            for (int i = 0; i < n; i++){
                if (s[i]=='B') b++;
                else if (s[i]=='R') r++;
                else{
                    if (b==0 && r==0) continue;
                    if (b + r < 2){
                        res = false;
                        break;
                    }
                    if (b==0 || r==0){
                        res = false;
                        break;
                    }
                    b = 0;
                    r = 0;
                }
            }
            if (s[n-1]!='W'){
                if (b==0 && r==0) continue;
                else if (b + r < 2){
                    res = false;
                }
                else if (b==0 || r==0){
                    res = false;
            }
            }
            if (res) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    // system("pause");
    return 0;
}