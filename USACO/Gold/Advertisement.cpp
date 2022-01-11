// https://cses.fi/problemset/task/1142/
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()
#define ll long long
int main() {
    IOS;
    int n, k; cin >> n;
    stack<pair<int, int>> st;
    ll mxArea = 0;
    pair<int, int> cur;
    for (int i = 0; i < n; i++) {
        cin >> k;
        int start = i;
        while (!st.empty() && k < st.top().first) {
            cur = st.top();
            st.pop();
            start = cur.second;
            mxArea = max(mxArea, (ll)(i - cur.second) * cur.first);
        }
        st.push({ k, start });
    }
    while (!st.empty()) {
        cur = st.top();
        st.pop();
        mxArea = max(mxArea, (ll)(n - cur.second) * cur.first);
    }
    cout << mxArea << '\n';
    // system("pause");
    return 0;
}