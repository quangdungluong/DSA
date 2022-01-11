#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
stack<int> s;
void solve() {
    cin >> n;
    ll ans = 0, m = 0;
    vector<int> a(n);
    FOR(i, 0, n - 1) {
        cin >> a[i];
    }
    int i = 0;
    while (i < n) {
        if (s.empty() || a[s.top()] <= a[i]) {
            s.push(i++);
        }
        else {
            int tp = s.top();
            s.pop();
            int width = (s.empty() ? i : i - s.top() - 1);
            m = width * a[tp];
            ans = max(m, ans);
        }
    }
    while (!s.empty()) {
        int tp = s.top();
        s.pop();
        int width = (s.empty() ? i : i - s.top() - 1);
        m = width * a[tp];
        ans = max(m, ans);
    }
    cout << ans << '\n';
}
int main() {
    solve();
    return 0;
}