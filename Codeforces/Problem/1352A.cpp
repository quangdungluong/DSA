#include <bits/stdc++.h>
using namespace std;
void solve(int n) {

}
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        int tmp = 10;
        string s = "";
        int cnt = 0;
        if (n != 1) {
            while (n && tmp <= n) {
                if (n % tmp) {
                    s += to_string(n % tmp) + " ";
                    n -= n % tmp;
                    cnt++;
                }
                else {
                    tmp *= 10;
                }
            }
            if (n != 1) {
                cnt++;
                s += to_string(n);
            }
        }
        else {
            cnt = 1;
            s = "1";
        }
        cout << cnt << '\n' << s << '\n';
    }
    return 0;
}