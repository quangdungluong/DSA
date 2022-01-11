#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, x;
    cin >> n >> p;
    vector<int> level(n);
    int cnt = 0;
    while (p--) {
        cin >> x;
        if (!level[x - 1]++) cnt++;
    }
    cin >> p;
    while (p--) {
        cin >> x;
        if (!level[x - 1]++) cnt++;
    }
    if (cnt == n) cout << "I become the guy.";
    else cout << "Oh, my keyboard!";
    return 0;
}