// https://cses.fi/problemset/task/1073
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

int n, k;
int main() {
    IOS;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> k;
        auto it = upper_bound(all(v), k);
        if (it == v.end()) v.push_back(k);
        else {
            *it = k;
        }
    }
    cout << v.size() << '\n';
    // system("pause");
    return 0;
}