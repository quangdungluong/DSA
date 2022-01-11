#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int a[26] = { 0 };
    int cnt = 0;
    for (auto x : s) {
        x = char(tolower(x));
        cnt += (!a[x - 'a']++);
    }
    if (cnt == 26) cout << "YES";
    else cout << "NO";
    return 0;
}