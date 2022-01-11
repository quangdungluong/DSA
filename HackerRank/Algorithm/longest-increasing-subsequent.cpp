#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int CeilIndex(int a[], int l, int r, int key) {
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (a[m] < key) {
            l = m;
        }
        else {
            r = m;
        }
    }
    return r;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    FOR(i, 0, n - 1) cin >> a[i];
    int tail[n];
    int len = 1;
    tail[0] = a[0];
    FOR(i, 1, n - 1) {
        if (a[i] < tail[0]) {
            tail[0] = a[i];
        }
        else if (a[i] > tail[len - 1]) {
            tail[len++] = a[i];
        }
        else {
            tail[CeilIndex(tail, -1, len - 1, a[i])] = a[i];
        }
    }
    cout << len << '\n';
    return 0;
}