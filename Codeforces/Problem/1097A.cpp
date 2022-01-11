#include <bits/stdc++.h>
using namespace std;

int main() {
    string a;
    cin >> a;
    vector<string> v(5);
    bool check = false;
    for (int i = 0; i < 5; i++) {
        cin >> v[i];
        if (v[i][0] == a[0] || v[i][1] == a[1]) check = true;
    }
    if (check) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}