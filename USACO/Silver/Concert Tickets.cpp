// https://cses.fi/problemset/task/1091
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve() {
    int n, m, h, t; cin >> n >> m;
    multiset<int> a;
    for (int i = 0; i < n; i++) {
        cin >> h;
        a.insert(h);
    }
    multiset<int>::iterator it;
    for (int i = 0; i < m; i++) {
        cin >> t;
        it = a.upper_bound(t);
        if (it == a.begin()) {
            cout << "-1\n";
        }
        else {
            it--;
            cout << *it << '\n';
            a.erase(it);
        }
    }
}
int main() {
    IOS;
    solve();
    // system("pause");
    return 0;
}