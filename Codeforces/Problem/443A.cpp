#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int a[26] = { 0 };
    int cnt = 0;
    for (auto x : s) {
        if (x >= 'a' && x <= 'z') {
            cnt += (!a[x - 'a']++);
        }
    }
    cout << cnt;
    return 0;
}