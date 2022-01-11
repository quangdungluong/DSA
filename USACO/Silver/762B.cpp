// https://codeforces.com/contest/762/problem/B
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

int main() {
    IOS;
    int a, b, c, m, val;
    string port;
    cin >> a >> b >> c >> m;
    vector<int> u, p;
    for (int i = 0; i < m; i++) {
        cin >> val >> port;
        if (port == "USB") u.push_back(val);
        else p.push_back(val);
    }
    sort(all(u)); sort(all(p));
    int res = 0, i = 0, j = 0;
    long long total = 0;
    while (i < u.size() && i < a) {
        res++;
        total += u[i++];
    }
    while (j < p.size() && j < b) {
        res++;
        total += p[j++];
    }
    while (c && (i < u.size() || j < p.size())) {
        res++; --c;
        if (i == u.size()) {
            total += p[j++];
        }
        else if (j == p.size()) {
            total += u[i++];
        }
        else {
            if (p[j] < u[i]) {
                total += p[j++];
            }
            else total += u[i++];
        }
    }
    cout << res << ' ' << total << '\n';
    // system("pause");
    return 0;
}