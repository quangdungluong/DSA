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
        FOR(i, 0, n - 1) {
            cin >> a[i];
        }
        int m = *max_element(all(a));
        bool c = false;
        int idx;
        FOR(i, 0, n - 1) {
            if (a[i] == m) {
                if ((i == 0 && a[i] > a[i + 1]) || (i == n - 1 && a[i] > a[i - 1]) || (i != 0 && i != n - 1 && (a[i] > a[i + 1] || a[i] > a[i - 1]))) {
                    c = true;
                    idx = i + 1;
                    break;
                }
            }
        }
        if (c) cout << idx << '\n';
        else cout << "-1\n";
    }
    return 0;
}