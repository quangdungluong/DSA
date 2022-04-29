#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()
#define ll long long
#define ld long double

int main() {
    IOS;
    int t;
    string s, c;
    cin >> t;
    while(t--){
        cin >> s >> c;
        int start = 0;
        bool res = true;
        while(1){
            int found = s.find(c, start);
            if (found != string::npos){
                if (found%2==0) break;
                start = found + 1;
            }
            else{
                res = false;
                break;
            }
        }
        if (res) cout << "YES\n";
        else cout << "NO\n";
    }
    // system("pause");
    return 0;
}