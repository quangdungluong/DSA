#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    bool c = true;
    while (n--) {
        cin >> x;
        if (x) c = false;
    }
    if (c) cout << "EASY";
    else cout << "HARD";
    return 0;
}