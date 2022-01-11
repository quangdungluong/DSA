#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, m;
void solve() {
    cin >> n;
    vector<int> ranked(n);
    FOR(i, 0, n - 1) {
        cin >> ranked[i];
    }
    cin >> m;
    vector<int> player(m);
    FOR(i, 0, m - 1) {
        cin >> player[i];
    }
    vector<int> sorted;
    for (auto x : ranked) {
        if (sorted.empty() || x != sorted[sz(sorted) - 1]) {
            sorted.push_back(x);
        }
    }
    int idx = sz(sorted) - 1;
    for (auto x : player) {
        while (1) {
            if (idx < 0) {
                cout << "1\n";
                break;
            }
            else if (x < sorted[idx]) {
                cout << idx + 2 << '\n';
                break;
            }
            else idx--;
        }
    }

}
int main() {
    solve();
    return 0;
}