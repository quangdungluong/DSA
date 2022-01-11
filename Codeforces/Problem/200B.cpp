#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, p, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p;
        sum += p;
    }
    cout << (double)sum / n;
    return 0;
}