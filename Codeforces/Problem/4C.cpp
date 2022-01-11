#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
string x;
void solve() {
    cin >> n;
    vector<string> a;
    vector<int> b;
    FOR(i, 0, n - 1) {
        cin >> x;
        if (a.empty()) {
            a.push_back(x);
            b.push_back(1);
            cout << "OK\n";
        }
        else if (find(all(a), x) == a.end()) {
            cout << "OK\n";
            a.push_back(x);
            b.push_back(1);
        }
        else {
            auto k = find(all(a), x) - a.begin();
            cout << x + to_string(b[k]++) << '\n';
        }
    }
}
int main() {
    solve();
    return 0;
}