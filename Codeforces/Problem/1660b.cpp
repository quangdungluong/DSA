#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()
#define ll long long
#define ld long double

int main() {
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        if (n==1){
            if (a[0]==1) cout << "YES\n";
            else cout << "NO\n";
        }
        else{
            sort(a.begin(), a.end());
            if (a[n-1]-a[n-2] > 1) cout << "NO\n";
            else cout << "YES\n";
        }
    }
    // system("pause");
    return 0;
}