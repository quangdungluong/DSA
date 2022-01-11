// https://cses.fi/problemset/task/1164
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve() {
    int n, a, b, k = 0;
    cin >> n;
    multimap<pair<int, int>, int> cus;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cus.insert({ {a,b},i });
    }
    multimap<int, int> m;
    multimap<int, int>::iterator it;
    vector<int> room(n);
    for (auto x : cus) {
        a = x.first.first; b = x.first.second;
        it = m.lower_bound(a);
        if (it == m.begin()) {
            k++;
            m.insert({ b,k });
            room[x.second] = k;
        }
        else {
            --it;
            m.insert({ b, it->second });
            room[x.second] = it->second;
            m.erase(it);
        }
    }
    cout << k << '\n';
    for (auto x : room) {
        cout << x << ' ';
    }
}
int main() {
    IOS;
    solve();
    // system("pause");
    return 0;
}