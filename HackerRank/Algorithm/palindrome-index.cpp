#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
string s;
bool isPalindrome(string s, int l, int r) {
    while (l <= r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }
    return true;
}
void solve() {
    cin >> s;
    if (isPalindrome(s, 0, sz(s) - 1)) cout << "-1\n";
    else {
        int i = 0, j = sz(s) - 1;
        while (s[i] == s[j]) {
            i++;
            j--;
        }
        if (isPalindrome(s, i + 1, j)) cout << i << '\n';
        else if (isPalindrome(s, i, j - 1)) cout << j << '\n';
        else cout << "-1\n";
    }
}
int main() {
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}