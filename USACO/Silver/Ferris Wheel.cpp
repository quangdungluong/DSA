// https://cses.fi/problemset/task/1090/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main() {
    IOS;
    int n, x, res = 0;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int i = 0, j = n - 1;
    while (i <= j) {
        if (a[i] + a[j] <= x) {
            i++;
            j--;
            res++;
        }
        else {
            j--;
            res++;
        }
    }
    cout << res << '\n';
    // system("pause");
    return 0;
}