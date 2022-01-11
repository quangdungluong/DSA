#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()
#define pb push_back
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int t, n, m, k;
int main() {
    IOS;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        int tmp = n - 1 + n * (m - 1);
        if (tmp == k) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}