#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = 0; i < a.size();i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = char(tolower(a[i]));
        }
        if (b[i] >= 'A' && b[i] <= 'Z') {
            b[i] = char(tolower(b[i]));
        }
        if (a[i] < b[i]) {
            cout << "-1" << '\n';
            break;
        }
        if (a[i] > b[i]) {
            cout << "1" << '\n';
            break;
        }
        if (a[i] == b[i]) cnt++;
    }
    if (cnt == a.size()) cout << "0" << '\n';
    return 0;
}