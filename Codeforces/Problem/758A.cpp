#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ll n, a, m, sum = 0;
    cin >> n;
    cin >> a;
    sum = m = a;
    for (int i = 1; i < n;i++) {
        cin >> a;
        m = max(m, a);
        sum += a;
    }
    cout << m * n - sum;
    return 0;
}