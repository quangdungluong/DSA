#include <bits/stdc++.h>
using namespace std;

#define m 40
#define k 4200508
int f[m + 1];
bool a[k];
vector<int> primeNum;
void solve() {
    for (int i = 0; i < 4; i++) f[i] = 1;
    for (int i = 4; i <= m; i++) {
        f[i] = f[i - 1] + f[i - 4];
    }
}
void prime() {
    memset(a, 1, sizeof(a));
    for (int i = 2; i < k; i++) {
        if (a[i]) {
            primeNum.push_back(i);
            for (int j = i * 2; j < k; j += i) a[j] = false;
        }
    }
}
int main() {
    int t, n;
    cin >> t;
    solve();
    prime();
    while (t--) {
        cin >> n;
        int i = 0, cnt = 0;
        while (primeNum[i] <= f[n]) {
            cnt++;
            i++;
        }
        cout << cnt << endl;
    }
    return 0;
}