#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, petrol, distance;
    queue<pair<int, int>> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> petrol >> distance;
        s.push(pair<int, int>(petrol, distance));
    }
    int start = 0, cnt = 0, remain = 0;
    while (cnt < n) {
        pair<int, int> a = s.front();
        remain += a.first;
        s.pop();
        if (remain >= a.second) {
            remain -= a.second;
            cnt++;
        }
        else {
            start += cnt + 1;
            cnt = 0;
            remain = 0;
        }
        s.push(a);
    }
    cout << start << endl;
    return 0;
}