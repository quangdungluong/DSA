// https://cses.fi/problemset/task/2217
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, m, x, y;
int main(){
    IOS;
    cin >> n >> m;
    int a[n+1], idx[n+1];
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        idx[a[i]] = i;
    }
    int cnt = 1,  l = 1;
    for (int i = 1; i <= n; i++){
        if (l > idx[i]) cnt++;
        l = idx[i];
    }
    while(m--){
        cin >> x >> y;
        int l = a[x], r = a[y];
        swap(a[x], a[y]);
        if (idx[l-1] <= idx[l] && idx[l-1] > y) cnt++;
        if (idx[l-1] > idx[l] && idx[l-1] <= y) cnt--;
        if (idx[l] <= idx[l+1] && idx[l+1] < y) cnt++;
        if (idx[l] > idx[l+1] && idx[l+1] >= y) cnt--;
        idx[l] = y;
        if (idx[r-1] <= idx[r] && idx[r-1] > x) cnt++;
        if (idx[r-1] > idx[r] && idx[r-1] <= x) cnt--;
        if (idx[r] <= idx[r+1] && idx[r+1] < x) cnt++;
        if (idx[r] > idx[r+1] && idx[r+1] >= x) cnt--;
        idx[r] = x;
        cout << cnt << '\n';
    }
    // system("pause");
    return 0;
}