#include <bits/stdc++.h>
using namespace std;

const long d = 1e9 + 7;

int main() {
    string s;
    cin >> s;
    // s = '4652'
    //sod[i] = (i+1)*s[i] + sod[i-1]*10
    //sod[0]=4
    //sod[1]=2*6+40=52
    //sod[2]=520+3*5
    int n = s.size();
    long sod[n];
    long ans = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) sod[i] = s[i] - '0';
        else sod[i] = (sod[i - 1] * 10 + (i + 1) * (s[i] - '0')) % d;
        ans = (ans + sod[i]) % d;
    }
    cout << ans << endl;
    return 0;
}