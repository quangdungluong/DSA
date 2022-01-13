// https://cses.fi/problemset/task/1141
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n;
int main(){
    IOS;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    map<int, int> m;
    int res = 0;
    for (int i = 0, j = 0; i < n; i++){
        j = max(m[a[i]], j);
        res = max(res, i-j+1);
        m[a[i]] = i + 1;
    }
    cout << res << '\n';
    // system("pause");
    return 0;
}