// https://oj.uz/problem/view/CEOI11_bal
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()

int main() {
    // IOS;
    int n, x; cin >> n;
    long double r;
    stack<int, long double> st;
    for (int i = 0; i < n; i++) {
        cin >> x >> r;
        while (!st.empty()) {
            pair<int, long double> cur = st.top();
            r = max(r, (long double)(x - cur.first) * (x - cur.first) / (4 * cur.second));
            if (r >= cur.second) st.pop();
            else break;
        }
    }

    system("pause");
    return 0;
}