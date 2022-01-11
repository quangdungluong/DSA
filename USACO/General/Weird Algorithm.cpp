#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n; cin >> n;
    string ans = "";
    while (n != 1) {
        cout << n << " ";
        n = (n % 2) ? n * 3 + 1 : n / 2;
    }
    cout << n << '\n';
    system("pause");
    return 0;
}