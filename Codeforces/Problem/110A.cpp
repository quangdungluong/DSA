#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool solve(ll n) {
    int cnt = 0;
    while (n) {
        if (n % 10 == 4 || n % 10 == 7) cnt++;
        n /= 10;
    }
    return (cnt == 4 || cnt == 7);
}

int main() {
    ll n;
    cin >> n;
    if (solve(n)) cout << "YES";
    else cout << "NO";
    return 0;
}