//https://codeforces.com/problemset/problem/701/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve() {
    int n;
    string a;
    cin >> n >> a;
    set<char> type;
    for (int i = 0; i < n; i++) {
        type.insert(a[i]);
    }
    int ans = n, left = 0;
    map<char, int> mp;
    for (int right = 0; right < n; right++) {
        mp[a[right]]++;
        while (left < right && mp.count(a[left]) && mp[a[left]]>1) {
            mp[a[left]]--;
            left++;
        }
        if (mp.size() == type.size()) {
            ans = min(ans, right - left + 1);
        }
    }
    cout << ans << '\n';
}
int main() {
    IOS;
    solve();
    // system("pause");
    return 0;
}