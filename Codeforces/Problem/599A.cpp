#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main() {
    ll d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    cout << min(d1 + d2 + d3, min(2 * (d1 + d2), min(2 * (d1 + d3), 2 * (d2 + d3))));
    return 0;
}