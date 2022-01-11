#include <bits/stdc++.h>
using namespace std;

int n;
int main() {
    cin >> n;
    vector<int> a(n);
    stack<int> s;
    for (int i = 0; i < n; i++) cin >> a[i];
    int max_xor = 0, min_xor;
    for (int i = 0; i < n; i++) {
        while (!s.empty()) {
            min_xor = a[i] ^ s.top();
            if (min_xor > max_xor) max_xor = min_xor;
            if (a[i] < s.top()) {
                s.pop();
            }
            else break;
        }
        s.push(a[i]);
    }
    cout << max_xor << endl;
    return 0;
}