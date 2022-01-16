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
        sort(s.begin(), s.end());
        cout << s << '\n';
    }
    // system("pause");
    return 0;
}