#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int x, n;
string s;
int solve(int i, int x, int n) {
    int ans = 0;
    while (pow(i, n) <= x) {
        if (pow(i, n) == x) ans++;
        else {
            ans += solve(i + 1, x - pow(i, n), n);
        }
        i++;
    }
    return ans;
}
int main() {
    cin >> x >> n;
    int i = 1;
    cout << solve(i, x, n) << '\n';
    return 0;
}