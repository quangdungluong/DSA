#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, x;
int main(){
    IOS;
    cin >> n;
    if (n==0){
        cout << "impossible" << endl;
        return 0;
    }
    map<int, int> g, f;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (x==0){
            cout << "impossible" << endl;
            return 0;
        }
        map<int, int> m;
        int j = 2;
        while (x != 1){
            if (x%j==0){
                m[j] += 1;
                g[j] += 1;
                x /= j;
            }
            else j++;
        }
        for (auto it=m.begin(); it != m.end(); it++){
            if (f.count(it->first)){
                f[it->first] = max(it->second, f[it->first]);
            }
            else f[it->first] = it->second;
        }
    }
    ll ans = 1;
    for (auto it=f.begin(); it!=f.end(); it++){
        int key = it->first;
        ans *= pow((ll)key, (ll)(g[key]-f[key]));
    }
    cout << ans << endl;
    // system("pause");
    return 0;
}