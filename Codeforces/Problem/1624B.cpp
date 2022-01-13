// https://codeforces.com/contest/1624/problem/B
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int t, a, b, c;
int main(){
    IOS;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        if ((c+a)%(2*b)==0 || ((2*b-c)%a==0 && (2*b-c>0)) || ((2*b-a)%c==0 && (2*b-a>0))) cout << "YES\n";
        else cout << "NO\n";
    }
    // system("pause");
    return 0;
}