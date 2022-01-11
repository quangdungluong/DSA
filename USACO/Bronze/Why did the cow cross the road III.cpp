#include <bits/stdc++.h>
using namespace std;

int n, a, b;
int main() {
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        v.push_back({ a,b });
    }
    sort(v.begin(), v.end());
    int cur_time = 0;
    for (auto x : v) {
        if (cur_time < x.first) {
            cur_time = x.first + x.second;
        }
        else cur_time += x.second;
    }
    cout << cur_time;
    system("pause");
    return 0;
}