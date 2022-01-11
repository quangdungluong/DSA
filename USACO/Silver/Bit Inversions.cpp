// https://cses.fi/problemset/task/1188
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s;
int m, x;
set<int> dif;
multiset<int> ret;
void modify(int x) {
    if (x == 0 || x == s.size()) return;
    auto it = dif.find(x);
    if (it != dif.end()) {
        int a = *prev(it), b = *next(it);
        ret.erase(ret.find(x - a)), ret.erase(ret.find(b - x));
        ret.insert(b - a);
        dif.erase(it);
    }
    else {
        it = dif.insert(x).first;
        int a = *prev(it), b = *next(it);
        ret.erase(ret.find(b - a));
        ret.insert(x - a), ret.insert(b - x);
    }
}
int main() {
    IOS;
    cin >> s >> m;
    dif.insert(0); dif.insert(s.size());
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] != s[i + 1]) dif.insert(i + 1);
    }
    for (auto it = dif.begin(); next(it) != dif.end(); it++) {
        ret.insert(*next(it) - *it);
    }
    for (int i = 0; i < m; i++) {
        cin >> x;
        modify(x - 1);
        modify(x);
        cout << *ret.rbegin() << ' ';
    }
    // system("pause");
    return 0;
}