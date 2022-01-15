// https://cses.fi/problemset/task/1661
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

ll n, x, a, res=0, sum=0;
map<ll, int> m;
int main(){
    IOS;
    cin >> n >> x;
    for (int i = 0; i < n; i++){
        cin >> a;
        sum += a;
        if (sum==x) res++;
        if (m.find(sum-x)!=m.end()) res += m[sum-x];
        m[sum]++;
    }
    cout << res << '\n';
    // system("pause");
    return 0;
}