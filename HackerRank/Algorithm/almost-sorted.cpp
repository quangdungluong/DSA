#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int n;
int a[100001];
int b[100001];
int diff[100001];
void solve() {
    cin >> n;
    FOR(i, 0, n - 1) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b, b + n);
    int cnt = -1;
    FOR(i, 0, n - 1) {
        if (a[i] != b[i]) {
            cnt++;
            diff[cnt] = i;
        }
    }
    if (cnt == -1) cout << "yes\n";
    else if (cnt == 1) cout << "yes\nswap " << diff[0] + 1 << " " << diff[1] + 1 << '\n';
    else {
        int st = diff[0], en = diff[cnt];
        while (st < en) {
            swap(a[st], a[en]);
            st++;
            en--;
        }
        bool c = true;
        FOR(i, 0, n - 1) {
            if (a[i] != b[i]) {
                c = false;
                break;
            }
        }
        if (c) cout << "yes\nreverse " << diff[0] + 1 << " " << diff[cnt] + 1 << '\n';
        else cout << "no\n";
    }
}
int main() {
    solve();
    return 0;
}