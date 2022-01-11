#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s = "";
    string k = "";
    for (int i = 0; i < m - 1; i++) {
        s += "#";
        k += ".";
    }
    for (int i = 1; i <= n; i++) {
        if (i % 2) {
            cout << s + "#" << '\n';
        }
        else if (i % 4 == 0) {
            cout << "#" + k << '\n';
        }
        else cout << k + "#" << '\n';
    }
    return 0;
}