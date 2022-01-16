#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int t;
string s;
int main(){
    IOS;
    cin >> t;
    while(t--){
        cin >> s;
        string res = "";
        bool is = false;
        for (int i = s.size()-2; i>=0; i--){
            string tmp = s.substr(i, 2);
            int x = stoi(tmp);
            int y = x%10+x/10;
            if (y >= 10){
                cout << s.substr(0, i) + to_string(y) + s.substr(i+2) << '\n';
                is = true;
                break;
            }
        }
        if (!is){
            string tmp = s.substr(0, 2);
            int x = stoi(tmp);
            int y = x%10+x/10;
            cout << to_string(y) + s.substr(2) << '\n';
        }
    }
    // system("pause");
    return 0;
}