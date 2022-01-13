// https://codeforces.com/contest/1624/problem/A
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int t, n, x;
int main(){
    IOS;
    cin >> t;
    while(t--){
        cin >> n;
        int a = 0, b = 1e9;
        for (int i = 0; i < n; i++){
            cin >> x;
            a = max(a, x);
            b = min(b, x);
        }
        cout << a-b << '\n';
    }
    // system("pause");
    return 0;
}