#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x;
    cin >> t;
    while (t--) {
        cin >> n;
        set<int> s;
        map<int, int> m;
        for (int i = 1; i <= n; i++) {
            cin >> x;
            if (s.find(x) == s.end()) {
                s.insert(x);
                m[x] = i;
            }
            else {
                if (m.find(x) != m.end()) m.erase(x);
            }
        }
        if (m.empty()) cout << "-1\n";
        else cout << m.begin()->second << '\n';
    }
    return 0;
}