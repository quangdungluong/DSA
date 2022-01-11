#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    string s;
    cin >> n >> s;
    string ans = "";
    int k = 0;
    for (int i = 0; i < n; i += k) {
        ans += s[i];
        k++;
    }
    cout << ans << '\n';
    return 0;
}