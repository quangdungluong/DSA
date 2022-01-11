#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> a(26, 0);
    int cnt = 0;
    for (auto x : s) {
        if (a[x - 'a']++ == 0) {
            cnt++;
        }
    }
    if (cnt % 2) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";
    return 0;
}