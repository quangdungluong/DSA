#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0, used = 0;
    while (used <= n)
    {
        ans++;
        used += ans * (ans + 1) / 2;
    }
    cout << --ans << '\n';
    return 0;
}