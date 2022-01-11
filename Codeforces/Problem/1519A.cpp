#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()
#define pb push_back
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int t, r, b, d;
int main() {
    IOS;
    cin >> t;
    while (t--) {
        cin >> r >> b >> d;
        if (r > b) swap(r, b);
        int k = b / r + (b % r != 0);
        if (k - 1 > d) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}