// https://codeforces.com/contest/1619/problem/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int t;
ll a, s;
int main(){
    IOS;
    cin >> t;
    while(t--){
        cin >> a >> s;
        ll res = 0, c = 1;
        bool is = true;
        while(true){
            if (a==0 && s==0) break;
            int x = a%10, y = s%10;
            a /= 10; s /= 10;
            int b = y-x;
            if (b < 0){
                b += 10;
                if (s % 10 != 1){
                    is = false;
                    break;
                }
                s /= 10;
            }
            res += b*c;
            c *= 10;
        }
        if (is) cout << res << '\n';
        else cout << "-1\n";
    }
    // system("pause");
    return 0;
}