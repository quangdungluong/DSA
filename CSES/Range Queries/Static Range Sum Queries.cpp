// https://cses.fi/problemset/task/1646
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int mx = 2e5+10;
ll n, q, a, b;
ll s[mx];
int main(){
    // IOS;
    cin >> n >> q;
    for (int i = 1; i <= n; i++){
        cin >> s[i];
        s[i] += s[i-1];
    }
    while(q--){
        cin >> a >> b;
        cout << s[b] - s[a-1] << '\n';
    }
    // system("pause");
    return 0;
}