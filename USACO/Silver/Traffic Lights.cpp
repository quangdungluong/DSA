// https://cses.fi/problemset/task/1163
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve() {
    int n, x, p;
    cin >> x >> n;
    set<int> s;
    s.insert(0); s.insert(x);
    multiset<int> res; res.insert(x);
    set<int>::iterator it, prev, after;
    for (int i = 0; i < n; i++) {
        cin >> p;
        s.insert(p);
        it = s.find(p);
        prev = --it;
        after = ++(++it);
        res.insert(*after - p);
        res.insert(p - *prev);
        res.erase(res.find(*after - *prev));
        cout << *res.rbegin() << ' ';
    }
}
int main() {
    IOS;
    solve();
    // system("pause");
    return 0;
}