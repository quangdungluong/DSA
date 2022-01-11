#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a > b) x++;
        if (a < b) y++;
    }
    if (x > y) cout << "Mishka" << '\n';
    if (x < y) cout << "Chris" << '\n';
    if (x == y) cout << "Friendship is magic!^^" << '\n';
    return 0;
}