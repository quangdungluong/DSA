#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
bool solve(int n, int m) {
    for (int i = n + 1; i <= m; i++) {
        if (isPrime(i)) {
            if (i != m) return false;
            else return true;
        }
    }
    return false;
}
int main() {
    int n, m;
    cin >> n >> m;
    if (solve(n, m)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}