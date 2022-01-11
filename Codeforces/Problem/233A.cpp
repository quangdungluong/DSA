#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    cin >> n;
    if (n % 2) {
        cout << "-1\n";
    }
    else {
        for (int i = 1; i <= n; i += 2) {
            cout << i + 1 << " " << i << " ";
        }
        cout << "\n";
    }
    return 0;
}