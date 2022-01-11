#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
string s;
ll n;
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        while (n % 2 == 0) {
            n /= 2;
        }
        if (n == 1) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}