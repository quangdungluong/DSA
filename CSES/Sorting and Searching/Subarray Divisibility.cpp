// https://cses.fi/problemset/task/1662
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

ll n, a, res=0, sum=0;
map<ll, int> m;
int main(){
    IOS;
    cin >> n;
    m[0] = 1;
    for (int i = 0; i < n; i++){
        cin >> a;
        sum += a;
        sum %= n;
        while(sum < 0) sum+=n;
        if (m.find(sum)!=m.end()) res+=m[sum];
        m[sum]++;
    }
    cout << res << '\n';
    // system("pause");
    return 0;
}
