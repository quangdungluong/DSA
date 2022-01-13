// https://codeforces.com/contest/1619/problem/B
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int t, n;
int main(){
    IOS;
    cin >> t;
    while(t--){
        cin >> n;
        int a = sqrt(n), b = cbrt(n);
        int cnt = 0;
        for (int i  = 1; i <= b; i++){
            int c = sqrt(i);
            if (c*c==i) cnt++;
        }
        cout << a + b - cnt << '\n';
    }
    // system("pause");
    return 0;
}
