#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

string s;
ll k;
ll solve(ll sum) {
    if (sum < 10) return sum;
    ll tmp = 0;
    while (sum) {
        tmp += sum % 10;
        sum /= 10;
    }
    return solve(tmp);
}
int main() {
    cin >> s >> k;
    ll sum = 0;
    FOR(i, 0, sz(s) - 1) {
        sum += s[i] - '0';
    }
    sum *= k;
    cout << solve(sum) << '\n';
    return 0;
}