#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
string s;
void solve() {
    string h = "hello";
    int i = 0;
    int j = 0;
    while (i < h.size() && j < s.size()) {
        if (h[i] == s[j]) i++;
        j++;
    }
    if (i == h.size()) cout << "YES\n";
    else cout << "NO\n";
}
int main() {
    cin >> s;
    solve();
    return 0;
}