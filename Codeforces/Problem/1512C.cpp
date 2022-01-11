#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, a, b;
string s;
int main() {
    cin >> t;
    while (t--) {
        cin >> a >> b >> s;
        if (a % 2 == 1 && b % 2 == 1) cout << "-1\n";
        else {
            bool valid = true;
            int n = s.size();
            FOR(i, 0, n - 1) {
                if (s[i] == '0') {
                    a--;
                    if (s[n - i - 1] == '1') {
                        valid = false;
                        break;
                    }
                    s[n - i - 1] = '0';
                }
                else if (s[i] == '1') {
                    b--;
                    if (s[n - i - 1] == '0') {
                        valid = false;
                        break;
                    }
                    s[n - i - 1] = '1';
                }
                else {
                    if (s[n - i - 1] == '1') {
                        s[i] = '1';
                        b--;
                    }
                    else if (s[n - i - 1] == '0') {
                        s[i] = '0';
                        a--;
                    }
                }
            }
            if (n % 2) {
                if (s[n / 2] == '?') {
                    if (a % 2) {
                        s[n / 2] = '0';
                        a--;
                    }
                    else if (b % 2) {
                        s[n / 2] = '1';
                        b--;
                    }
                    else {
                        valid = false;
                    }
                }
            }
            if (!valid || a < 0 || b < 0 || a % 2 == 1 || b % 2 == 1) {
                cout << "-1\n";
            }
            else {
                FOR(i, 0, n / 2) {
                    if (s[i] == '?') {
                        if (a) {
                            a -= 2;
                            s[i] = s[n - i - 1] = '0';
                        }
                        else {
                            b -= 2;
                            s[i] = s[n - i - 1] = '1';
                        }
                    }
                }
                cout << s << '\n';
            }
        }

    }
    return 0;
}