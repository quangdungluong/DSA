// http://www.usaco.org/index.php?page=viewproblem2&cpid=894
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n, x, y;
void solve(string idx) {
    freopen((idx + ".in").c_str(), "r", stdin);
    freopen((idx + "_.out").c_str(), "w", stdout);
    cin >> n;
    int deg = INT_MIN;
    int a[n+1] = {};
    for (int i = 0; i < n-1; i++){
        cin >> x >> y;
        a[x]++;
        a[y]++;
        deg = max(deg, max(a[x]+1, a[y]+1));
    }
    cout << deg;

}
int main() {
    for (int i = 1; i <= 10; i++) {
        solve(to_string(i));
    }
}