// https://codeforces.com/contest/1619/problem/A
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int t;
int main(){
    IOS;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        if (s.size()%2==0 && s.substr(0, s.size()/2)==s.substr(s.size()/2, s.size()/2)) cout << "YES\n";
        else cout << "NO\n";
    }
    // system("pause");
    return 0;
}