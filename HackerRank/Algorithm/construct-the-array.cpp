#include <bits/stdc++.h>
using namespace std;

long d = 1e9 + 7;
int main() {
    int n, k, x;
    cin >> n >> k >> x;
    // f(n): ways to contructs len n with x == 1
    // g(n): ways to contructs len n with x != 1
    // So: f(n) = g(n-1)*(k-1)
    // g(n) = f(n-1) + g(n-1)*(k-2)
    vector<long> f(n + 1, 0);
    vector<long> g(n + 1, 0);
    f[2] = 0;
    g[2] = 1;
    for (int i = 3; i <= n; i++) {
        f[i] = (g[i - 1] * (k - 1)) % d;
        g[i] = (f[i - 1] + g[i - 1] * (k - 2)) % d;
    }
    if (x == 1) cout << f[n];
    else cout << g[n];
    return 0;
}