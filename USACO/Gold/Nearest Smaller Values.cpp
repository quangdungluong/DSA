// https://cses.fi/problemset/task/1645
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

int main() {
    IOS;
    int n, x; cin >> n;
    stack<pair<int, int>> st;
    for (int i = 0; i < n; i++) {
        cin >> x;
        while (!st.empty() && x <= st.top().first) {
            st.pop();
        }
        if (st.empty()) cout << "0 ";
        else cout << st.top().second << ' ';
        st.push({ x, i + 1 });
    }
    // system("pause");
    return 0;
}