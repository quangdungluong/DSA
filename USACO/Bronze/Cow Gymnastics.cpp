#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n; cin >> k >> n;
    vector<vector<int>> a(k, vector<int>(n));
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    map<pair<int, int>, int> mp;
    for (auto x : a) {
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                mp[{x[i], x[j]}]++;
            }
        }
    }
    for (auto itr = mp.begin(); itr != mp.end(); itr++) {
        if (itr->second == k) cnt++;
    }
    cout << cnt;
    system("pause");
    return 0;
}