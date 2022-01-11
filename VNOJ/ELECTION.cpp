#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
    IOS;
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int x, y=0, sum=0;
        for (int i = 0; i < n; i++){
            cin >> x;
            y = max(x, y);
            sum += x;
        }
        if ((k-y*n+sum>=0) && (k-y*n+sum)%n==0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    // system("pause");
    return 0;
}