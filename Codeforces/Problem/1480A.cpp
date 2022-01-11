#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int t;
    string s;
    cin >> t;
    while (t--) {
        cin >> s;
        for (int i = 0; i < s.size(); i += 2) {
            if (s[i] == 'a') s[i] = 'b';
            else s[i] = 'a';
        }
        for (int i = 1; i < s.size(); i += 2) {
            if (s[i] == 'z') s[i] = 'y';
            else s[i] = 'z';
        }
        cout << s << '\n';
    }
    return 0;
}