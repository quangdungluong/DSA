#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n, x;
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        map<int, vector<int>> m;
        FOR(i, 1, n) {
            cin >> x;
            m[x].push_back(i);
        }
        if (m.size() == 1) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
            map<int, vector<int>>::iterator itr = m.begin();
            x = m.begin()->second[0];
            for (++itr; itr != m.end(); itr++) {
                FOR(i, 0, itr->second.size() - 1) {
                    cout << x << " " << itr->second[i] << '\n';
                }
            }
            x = (++m.begin())->second[0];
            FOR(i, 1, m.begin()->second.size() - 1) {
                cout << x << " " << m.begin()->second[i] << '\n';
            }
        }
    }
    return 0;
}