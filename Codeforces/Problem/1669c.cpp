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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int odd = a[0]%2, even = a[1]%2;
        bool res = true;
        for (int i = 0; i < n; i+=2){
            if (a[i]%2!=odd) res = false;
        }
        for (int i = 1; i < n; i+=2){
            if (a[i]%2!=even) res = false;
        }
        if (res) cout << "YES\n";
        else cout << "NO\n";
    }
    // system("pause");
    return 0;
}