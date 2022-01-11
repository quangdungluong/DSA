#include <bits/stdc++.h>
using namespace std;

#define ll long long

int n, a[21];
ll solve(int i, ll s1, ll s2) {
    if (i == n) {
        return abs(s1 - s2);
    }
    return min(solve(i + 1, s1, s2 + a[i]), solve(i + 1, s1 + a[i], s2));
}
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << solve(0, 0, 0);
    system("pause");
    return 0;
}