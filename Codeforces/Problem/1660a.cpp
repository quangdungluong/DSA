#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()
#define ll long long
#define ld long double

int main() {
    IOS;
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if (a==0) cout << 1 << '\n';
        else cout << a + 2*b + 1 << '\n';
    }
    // system("pause");
    return 0;
}