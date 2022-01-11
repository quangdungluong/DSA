#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

bool cmp(string a, string b) {
    return (a + b) < (b + a);
}
int main() {
    IOS;
    int n; cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end(), cmp);
    string ans = "";
    for (auto x : v) {
        ans += x;
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}