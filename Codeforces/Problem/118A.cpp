#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t;
string s;
bool isVowels(char s) {
    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u' || s == 'y') return true;
    return false;
}
void solve() {
    for (auto x : s) {
        if (x >= 'A' && x <= 'Z') x = tolower(x);
        if (!isVowels(x)) cout << "." << x;
    }
}
int main() {
    cin >> s;
    solve();
    return 0;
}