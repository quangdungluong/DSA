// https://cses.fi/problemset/task/1652
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int f[1001][1001];
int n, q, a, b, c, d;
string s;
int main(){
    IOS;
    cin >> n >> q;
    for (int i = 0; i < n; i++){
        cin >> s;
        for (int j = 0; j < n; j++){
            f[i+1][j+1] = (s[j]=='*') + f[i][j+1] + f[i+1][j] - f[i][j];
        }
    }
    for (int i = 0; i < q; i++){
        cin >> c >> a >> d >> b;
        int res = f[d][b] + f[c-1][a-1] - f[d][a-1] - f[c-1][b];
        cout << res << '\n';
    }
    // system("pause");
    return 0;
}