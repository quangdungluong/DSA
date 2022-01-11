#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define all(a) a.begin(),a.end()
#define sz(a) a.size()

int t1, t2, n;
string sum(string a, string b) {
    vector<int> res(max(sz(a), sz(b)) + 1, 0);
    int i = sz(a) - 1, j = sz(b) - 1;
    int carry = 0, idx = 0;
    while (i >= 0 && j >= 0) {
        int sum = a[i] - '0' + b[j] - '0' + carry + res[idx];
        res[idx++] = sum % 10;
        carry = sum / 10;
        i--;
        j--;
    }
    while (i >= 0) {
        int sum = a[i] - '0' + carry + res[idx];
        res[idx++] = sum % 10;
        carry = sum / 10;
        i--;
    }
    while (j >= 0) {
        int sum = b[j] - '0' + carry + res[idx];
        res[idx++] = sum % 10;
        carry = sum / 10;
        j--;
    }
    if (carry) res[idx] += carry;
    i = sz(res) - 1;
    while (i >= 0 && res[i] == 0) {
        i--;
    }
    if (i == -1) return "0";
    string ans = "";
    while (i >= 0) {
        ans += to_string(res[i--]);
    }
    return ans;
}
string mul(string a, string b) {
    vector<int> res(sz(a) + sz(b), 0);
    int idx_a = 0, idx_b = 0;
    for (int i = sz(a) - 1; i >= 0; i--) {
        int carry = 0;
        int n_a = a[i] - '0';
        idx_b = 0;
        for (int j = sz(b) - 1; j >= 0; j--) {
            int n_b = b[j] - '0';
            int sum = n_a * n_b + carry + res[idx_a + idx_b];
            res[idx_a + idx_b] = sum % 10;
            carry = sum / 10;
            idx_b++;
        }
        if (carry) res[idx_a + idx_b] += carry;
        idx_a++;
    }
    int i = sz(a) + sz(b) - 1;
    while (i >= 0 && res[i] == 0) {
        i--;
    }
    if (i == -1) return "0";
    string ans = "";
    while (i >= 0) {
        ans += to_string(res[i--]);
    }
    return ans;
}
void solve(string a, string b) {
    FOR(i, 3, n) {
        string tmp = sum(a, mul(b, b));
        a = b;
        b = tmp;
    }
    cout << b << '\n';
}
int main() {
    cin >> t1 >> t2 >> n;
    string a = to_string(t1);
    string b = to_string(t2);
    solve(a, b);
    return 0;
}