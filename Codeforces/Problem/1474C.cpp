// https://codeforces.com/problemset/problem/1474/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int t, n, a;
vector<pair<int, int>> check(multiset<int> s, int x) {
    vector<pair<int, int>> res;
    multiset<int>::iterator it;
    while (1) {
        int k = *s.rbegin();
        s.erase(s.find(k));
        it = s.find(x - k);
        if (it != s.end()) {
            res.push_back({ k,*it });
            x = k;
            s.erase(it);
        }
        else {
            res[0] = { -1,-1 };
            return res;
        }
        if (s.empty()) return res;
    }
}
void solve() {
    cin >> n;
    multiset<int> s;
    for (int i = 0; i < 2 * n; i++) {
        cin >> a;
        s.insert(a);
    }
    bool valid = true;
    for (auto it = s.begin(); next(it) != s.end(); it++) {
        int k = *it + *s.rbegin();
        vector<pair<int, int>> res = check(s, k);
        if (res[0].first != -1) {
            cout << "YES\n" << k << '\n';
            for (auto x : res) {
                cout << x.first << ' ' << x.second << '\n';
            }
            valid = false;
            break;
        }
    }
    if (valid) cout << "NO\n";
}
int main() {
    IOS;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
    // system("pause");
    return 0;
}