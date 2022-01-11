#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
string s;
bool solve(string s, long long int tmp, int idx) {
    int digit = idx + 1;
    int curr = digit;
    bool valid = true;
    while (curr + digit - 1 < sz(s)) {
        long long int c = 0;
        if (s[curr] == '0') {
            valid = false;
            break;
        }
        FOR(i, curr, curr + digit - 1) {
            c = c * 10 + (s[i] - '0');
        }
        if (c - tmp == 1) {
            curr = curr + digit;
            tmp = c;
        }
        else {
            if (curr + digit < sz(s) && (c * 10 + (s[curr + digit] - '0') - tmp) == 1) {
                tmp = c * 10 + (s[curr + digit] - '0');
                curr = curr + digit + 1;
                digit++;
            }
            else {
                valid = false;
                break;
            }
        }
    }
    return (valid && curr == sz(s));
}
int main() {
    cin >> t;
    while (t--) {
        cin >> s;
        if (s[0] == '0' || sz(s) < 2) cout << "NO\n";
        else {
            long long int tmp = 0;
            bool c = false;
            FOR(i, 0, sz(s) / 2 - 1) {
                tmp = tmp * 10 + (s[i] - '0');
                if (solve(s, tmp, i)) {
                    c = true;
                    break;
                }
            }
            if (c) cout << "YES " << tmp << '\n';
            else cout << "NO\n";
        }
    }
    return 0;
}