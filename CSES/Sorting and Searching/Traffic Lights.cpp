// https://cses.fi/problemset/task/1163
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int x, n, p;

int main(){
    IOS;
    cin >> x >> n;
    set<int> l;
    multiset<int> d;
    l.insert(0); l.insert(x);
    d.insert(x);
    for (int i = 0; i < n; i++){
        cin >> p;
        auto it1 = l.upper_bound(p), it2 = it1;
        --it2;
        l.insert(p);
        d.erase(d.find(*it1 - *it2));
        d.insert(p-*it2);
        d.insert(*it1-p);
        auto it = d.end(); --it;
        cout << *it << ' ';
    }
    // system("pause");
    return 0;
}