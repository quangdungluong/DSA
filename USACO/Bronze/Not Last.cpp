#include <bits/stdc++.h>
using namespace std;

int n, x;
string cow;
int main() {
    map<string, int> mp;
    freopen("10.in", "r", stdin);
    freopen("output.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> cow >> x;
        mp[cow] += x;
    }
    vector<pair<int, string>> a;
    for (auto x : mp) {
        a.push_back({ x.second, x.first });
    }
    sort(a.begin(), a.end());
    if (a.size() == 1) {
        cout << a[0].second << '\n';
    }
    else if (a.size() < 7) {
        int local_min = a[0].first;
        bool valid = false;
        for (auto x : a) {
            if (x.first > local_min) {
                cout << a[0].second << '\n';
                valid = true;
                break;
            }
        }
        if (!valid) cout << "Tie\n";
    }
    else {
        int local_min = a[0].first;
        bool valid = false;
        for (auto x : a) {
            if (x.first > local_min) {
                cout << x.second << '\n';
                valid = true;
                break;
            }
        }
        if (!valid) cout << "Tie\n";
    }
}