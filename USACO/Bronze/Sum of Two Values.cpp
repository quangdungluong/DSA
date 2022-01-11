#include <bits/stdc++.h>
using namespace std;

int n, x;
int main() {
    cin >> n >> x;
    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool c = false;
    for (int i = 0; i < n; i++) {
        if (mp.count(x - a[i])) {
            c = 1;
            cout << i + 1 << " " << mp[x - a[i]];
            break;
        }
        mp[a[i]] = i + 1;
    }
    if (!c) cout << "IMPOSSIBLE";
    return 0;
}