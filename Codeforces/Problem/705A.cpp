#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "";
    for (int i = 1;i < n;i++) {
        if (i % 2) s += "I hate that ";
        else s += "I love that ";
    }
    if (n % 2) s += "I hate it";
    else s += "I love it";
    cout << s << '\n';
    return 0;
}