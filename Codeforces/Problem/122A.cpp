#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
void solve() {
    if (t == 4 || t == 7 || t == 8) cout << "YES\n";
    else if (t < 10) cout << "NO\n";
    else {
        vector<int> a = { 4,7 };
        int i = 0;
        while (1) {
            if (a[i] * 10 + 4 <= t) a.push_back(a[i] * 10 + 4);
            else { break; }
            if (a[i] * 10 + 7 <= t) a.push_back(a[i] * 10 + 7);
            else { break; }
            i++;
        }
        bool c = false;
        for (auto x : a) {
            if (t % x == 0) {
                cout << "YES\n";
                c = true;
                break;
            }
        }
        if (!c) cout << "NO\n";
    }
}
int main() {
    cin >> t;
    solve();
    return 0;
}