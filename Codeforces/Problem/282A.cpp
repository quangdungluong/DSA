#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ini = 0;
    while (n--) {
        string s;
        cin >> s;
        for (auto x : s) {
            if (x == '+') {
                ini++;
                break;
            }
            if (x == '-') {
                ini--;
                break;
            }
        }
    }
    cout << ini << '\n';
    return 0;
}