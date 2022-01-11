#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, x;
string s;
void solve() {
    cin >> s;
    int idx = 0;
    set<int> a;
    FOR(i, 0, sz(s) - 1) {
        if (s[i] == s[idx]) {
            int cnt = i - idx + 1;
            a.insert(cnt * (s[i] - 'a' + 1));
        }
        else {
            idx = i;
            a.insert(s[i] - 'a' + 1);
        }
    }
    cin >> n;
    FOR(i, 0, n - 1) {
        cin >> x;
        if (a.count(x) == 0) cout << "No\n";
        else cout << "Yes\n";
    }
}
int main() {
    solve();
    return 0;
}