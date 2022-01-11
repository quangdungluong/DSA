#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

void solve(int n, int m) {
    int cnt = 0;
    FOR(i, 0, sqrt(n)) {
        int b = n - i * i;
        if (b * b + i == m) cnt++;
    }
    cout << cnt << '\n';
}
int main() {
    int n, m;
    cin >> n >> m;
    solve(n, m);
    return 0;
}