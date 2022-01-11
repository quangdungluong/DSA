#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()
int counterDigit(ll n);
void solve();

int t;
ll n;
int counterDigit(ll n) {
    int cnt = 0;
    while (n) {
        cnt++;
        n /= 2;
    }
    return cnt;
}
void solve() {
    cin >> n;
    int c = 0;
    while (n != 1) {
        if (!(n & (n - 1))) {
            n /= 2;
        }
        else {
            n = n - pow(2, counterDigit(n) - 1);
        }
        c = ~c;
    }
    if (c) cout << "Louise\n";
    else cout << "Richard\n";
}

int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}