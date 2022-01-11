// https://codeforces.com/problemset/problem/1000/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long

int n;
ll l, r;
void solve() {
    cin >> n;
    vector<ll> res(n + 1, 0);
    vector<pair<ll, int>> v;
    for (int i = 0; i < n; i++) {
        cin >> l >> r;
        v.push_back({ l,1 }); v.push_back({ r + 1,-1 });
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size() - 1; i++) {
        if (i) v[i].second += v[i - 1].second;
        res[v[i].second] += v[i + 1].first - v[i].first;
    }
    for (int i = 1; i <= n; i++) {
        cout << res[i] << ' ';
    }
}
int main() {
    IOS;
    solve();
    // system("pause");
    return 0;
}