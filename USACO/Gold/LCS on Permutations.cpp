// https://codeforces.com/gym/102951/problem/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

int n;
int a[100001], b[100001];
int solve() {
    // pos(): pos[a[i]] = i
    // c(): c[i] = pos[b[i]]
    // -> LCS is the LIS in c
    int pos[n];
    for (int i = 0; i < n; i++) {
        pos[a[i]] = i;
    }
    int c[n];
    for (int i = 0; i < n; i++) {
        c[i] = pos[b[i]];
    }
    vector<int> res;
    for (int i = 0; i < n; i++) {
        int x = c[i];
        auto it = lower_bound(all(res), x);
        if (it == res.end()) res.push_back(x);
        else *it = x;
    }
    return res.size();
}
int main() {
    IOS;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    cout << solve() << '\n';
    // system("pause");
    return 0;
}