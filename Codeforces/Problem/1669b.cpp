#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n, x, res=-1;
        cin >> n;
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++){
            cin >> x;
            m[x]++;
            if (m[x]>=3) res = x;
        }
        cout << res << '\n';
    }
    // system("pause");
    return 0;
}