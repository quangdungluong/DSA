#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string ans = "";
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) ans += '1';
        else ans += '0';
    }
    cout << ans;
    return 0;
}