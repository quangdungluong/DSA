#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()
#define pb push_back
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int mxN = 101;
int t, n, x, m;
int main() {
    IOS;
    cin >> t;
    while (t--) {
        cin >> n >> x;
        vector<int> a(n);
        FOR(i, 0, n - 1) {
            cin >> a[i];
        }
        int s = accumulate(all(a), 0);
        if (s == x) cout << "NO\n";
        else {
            cout << "YES\n";
            int i = 0, j = n - 1;
            s = 0;
            while (i <= j) {
                while (i <= j && s + a[i] != x) {
                    cout << a[i] << ' ';
                    s += a[i++];
                }
                while (i <= j && s + a[j] != x) {
                    cout << a[j] << ' ';
                    s += a[j--];
                }
            }
            cout << '\n';
        }
    }
    return 0;
}