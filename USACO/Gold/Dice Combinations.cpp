// https://cses.fi/problemset/task/1633
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

const int d = 1e9 + 7;
int main() {
    IOS;
    int n; cin >> n;
    vector<int> a(n + 1);
    a[0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; i - j >= 0 && j <= 6; j++) {
            a[i] = (a[i] + a[i - j]) % d;
        }
    }
    cout << a[n] << '\n';
    // system("pause");
    return 0;
}