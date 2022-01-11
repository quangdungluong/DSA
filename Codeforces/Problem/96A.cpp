#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
string s;
string a = "0000000", b = "1111111";
void solve() {
    cin >> s;
    if (s.find(a) != string::npos || s.find(b) != string::npos) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    solve();
    return 0;
}