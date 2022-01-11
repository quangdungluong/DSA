#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    int cnt = 0;
    vector<string> a;
    sort(s.begin(), s.end());
    do {
        a.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    cout << a.size();
    for (auto x : a) {
        cout << '\n' << x;
    }
    system("pause");
    return 0;
}