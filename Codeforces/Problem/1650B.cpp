#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()
#define ll long long
#define ld long double

int main() {
    IOS;
    int t, l, r, a, m1, m2;
    cin >> t;
    while(t--){
        cin >> l >> r >> a;
        m1 = r/a + r%a;
        if (l/a < r/a) m2 = r/a-1 + a-1;
        else m2 = r/a + r%a;
        cout << max(m1, m2) << '\n';
    }
    // system("pause");
    return 0;
}