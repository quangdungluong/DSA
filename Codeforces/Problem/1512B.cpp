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
        vector<string> a(n);
        FOR(i, 0, n - 1) cin >> a[i];
        multimap<int, int> m;
        FOR(i, 0, n - 1) {
            FOR(j, 0, n - 1) {
                if (a[i][j] == '*') {
                    m.insert(pair<int, int>(i, j));
                }
            }
        }
        auto itr1 = m.begin();
        auto itr2 = ++m.begin();
        if (itr1->first == itr2->first) {
            if (itr1->first == n - 1) {
                a[itr1->first - 1][itr1->second] = '*';
                a[itr2->first - 1][itr2->second] = '*';
            }
            else {
                a[itr1->first + 1][itr1->second] = '*';
                a[itr2->first + 1][itr2->second] = '*';
            }
        }
        else if (itr1->second == itr2->second) {
            if (itr1->second == n - 1) {
                a[itr1->first][itr1->second - 1] = '*';
                a[itr2->first][itr2->second - 1] = '*';

            }
            else {
                a[itr1->first][itr1->second + 1] = '*';
                a[itr2->first][itr2->second + 1] = '*';
            }
        }
        else {
            int x1 = itr1->first, x2 = itr2->first, y1 = itr1->second, y2 = itr2->second;
            a[x1][y2] = a[x2][y1] = '*';
        }
        FOR(i, 0, n - 1) {
            cout << a[i] << '\n';
        }
    }
    return 0;
}