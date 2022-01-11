// https://cses.fi/problemset/task/1145
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

int n;
int a[200001];
int solve() {
    vector<int> dp;
    dp.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        auto it = lower_bound(dp.begin(), dp.end(), a[i]);
        if (it == dp.end()) {
            dp.push_back(a[i]);
        }
        else *it = a[i];
    }
    return dp.size();
}
int main() {
    IOS;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << solve() << '\n';
    // system("pause");
    return 0;
}