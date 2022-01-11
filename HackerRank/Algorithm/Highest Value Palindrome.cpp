#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int k, n;
string s;
void solve() {
    cin >> n >> k >> s;
    vector<int> a;
    int cnt = 0;
    FOR(i, 0, n / 2 - 1) {
        if (s[i] != s[n - i - 1]) {
            cnt++;
            a.push_back(i);
        }
    }
    if (cnt > k) {
        cout << "-1\n";
    }
    else {
        int tmp = k - cnt;
        FOR(i, 0, n / 2 - 1) {
            if (find(all(a), i) != a.end()) {
                int m = max(s[i] - '0', s[n - 1 - i] - '0');
                if (m == 9) s[i] = s[n - 1 - i] = '9';
                else {
                    if (tmp) {
                        s[i] = s[n - 1 - i] = '9';
                        tmp--;
                    }
                    else s[i] = s[n - 1 - i] = '0' + m;
                }
            }
            else {
                if (tmp > 1 && s[i] != '9') {
                    tmp -= 2;
                    s[i] = s[n - i - 1] = '9';
                }
            }
        }
        if (tmp && n % 2) s[n / 2] = '9';
        cout << s << '\n';
    }
}
int main() {
    solve();
    return 0;
}