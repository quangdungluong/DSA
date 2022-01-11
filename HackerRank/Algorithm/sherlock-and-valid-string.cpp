#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int a[26];
string s;
void solve() {
    cin >> s;
    memset(a, 0, sizeof(a));
    for (auto x : s) {
        a[x - 'a']++;
    }
    vector<int> b;
    vector<int> c;
    FOR(i, 0, 25) {
        if (a[i]) {
            if (b.empty() || find(all(b), a[i]) == b.end()) {
                b.push_back(a[i]);
                c.push_back(1);
            }
            else {
                int j = find(all(b), a[i]) - b.begin();
                c[j]++;
            }
        }
    }
    if (b.size() == 1) cout << "YES\n";
    else if (b.size() == 2) {
        if (c[0] == 1 || c[1] == 1) {
            if ((b[0] == 1 && c[0] == 1) || (b[1] == 1 && c[1] == 1)) cout << "YES\n";
            else if (abs(b[0] - b[1]) == 1) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "NO\n";
    }
    else cout << "NO\n";
    // for (auto x : b) {
    //     cout << x << " ";
    // }
}
int main() {
    solve();
    system("pause");
    return 0;
}