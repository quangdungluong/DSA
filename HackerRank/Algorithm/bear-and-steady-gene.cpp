#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t, n;
string s;
bool checkValid(map<char, int>m, int n) {
    if (m['A'] > n / 4 || m['T'] > n / 4 || m['C'] > n / 4 || m['G'] > n / 4) return false;
    return true;
}
void solve() {
    cin >> n >> s;
    int tail = 0;
    map<char, int> m;
    FORD(i, n - 1, 0) {
        m[s[i]]++;
        if (!checkValid(m, n)) {
            tail = i + 1;
            m[s[i]]--;
            break;
        }
    }
    if (tail == 0) cout << "0\n";
    else {
        int out = INT_MAX;
        for (int head = -1; head < n - 1 && tail < n && head < tail; head++) {
            while (!checkValid(m, n) && tail < n) {
                m[s[tail]]--;
                tail++;
            }
            if (tail > n || !checkValid(m, n)) {
                break;
            }
            int len = max(0, tail - head - 1);
            out = min(len, out);
            m[s[head + 1]]++;
        }
        cout << out << '\n';
    }
}
int main() {
    solve();
    return 0;
}
