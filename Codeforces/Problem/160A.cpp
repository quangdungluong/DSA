#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n, x, sum = 0;
vector<int> a;
void solve() {
    cin >> n;
    FOR(i, 0, n - 1) {
        cin >> x;
        a.push_back(x);
        sum += x;
    }
    sort(a.rbegin(), a.rend());
    int curr = 0;
    FOR(i, 0, n - 1) {
        curr += a[i];
        if (curr > sum - curr) {
            cout << i + 1 << '\n';
            break;
        }
    }
}
int main() {
    solve();
    return 0;
}