#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n;
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> a(n);
        FOR(i, 0, n - 1) cin >> a[i];
        int idx = 0;
        if (a[0] != a[1]) {
            if (a[2] == a[0]) cout << "2\n";
            else cout << "1\n";
        }
        else {
            FOR(i, 2, n - 1) {
                if (a[i] != a[idx]) {
                    idx = i;
                    break;
                }
            }
            cout << idx + 1 << '\n';
        }
    }
    return 0;
}