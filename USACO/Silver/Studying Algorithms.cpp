// https://codeforces.com/gym/102951/problem/B
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n, x;
int main() {
    IOS;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int cur = 0, i = 0;
    while (i < n && cur + a[i] <= x) {
        cur += a[i];
        i++;
    }
    cout << i << '\n';
    // system("pause");
    return 0;
}