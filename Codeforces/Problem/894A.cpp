#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size(), cnt = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (s[i] == 'Q' && s[j] == 'A' && s[k] == 'Q') cnt++;
            }
        }
    }
    cout << cnt << '\n';
    return 0;
}