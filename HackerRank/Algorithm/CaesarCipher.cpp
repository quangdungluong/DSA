#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define ll long long
#define ALL(a) a.begin(),a.end()
#define sz(a) (int)a.size()

const int N = 26;
string caesarCipher(string s, int k) {
    FOR(i, 0, sz(s) - 1) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = 'a' + (s[i] - 'a' + k) % N;
        }
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = 'A' + (s[i] - 'A' + k) % N;
        }
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string s;
    getline(cin, s);
    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << caesarCipher(s, k) << '\n';
    system("pause");
    return 0;
}