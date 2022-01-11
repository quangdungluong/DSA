#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
string s;
bool isFail(string s) {
    bool c = true;
    FOR(i, 1, sz(s) - 1) {
        if (s[i] >= 'a' && s[i] <= 'z') c = false;
    }
    return c;
}
void solve() {
    cin >> s;
    if (isFail(s)) {
        FOR(i, 0, sz(s) - 1) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] = toupper(s[i]);
            else s[i] = tolower(s[i]);
        }
    }
    cout << s << '\n';
}
int main() {
    solve();
    return 0;
}