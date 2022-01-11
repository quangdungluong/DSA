#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string a = s; //lower
    string b = s; //upper
    int cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            cnt++;
            b[i] = char(toupper(s[i]));
        }
        else {
            a[i] = char(tolower(s[i]));
        }
    }
    if (cnt >= s.size() - cnt) cout << a << '\n';
    else cout << b << '\n';
    return 0;
}