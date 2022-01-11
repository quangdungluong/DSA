// https://cses.fi/problemset/task/1629
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    IOS;
    int n, a, b;
    vector<pair<int, int>> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({ b,a });
    }
    sort(v.begin(), v.end());
    int res = 1, cur = 0;
    for (int i = 1; i < v.size(); i++) {
        if (v[i].second >= v[cur].first) {
            res++;
            cur = i;
        }
    }
    cout << res << '\n';
    // system("pause");
    return 0;
}
