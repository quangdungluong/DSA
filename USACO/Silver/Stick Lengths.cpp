// https://cses.fi/problemset/task/1074
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    IOS;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int k = v[n / 2];
    long long ans = 0;
    for (auto x : v) {
        ans += abs(x - k);
    }
    cout << ans << ' ';
    // system("pause");
    return 0;
}

