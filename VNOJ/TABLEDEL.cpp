#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
    IOS;
    int n, m, k, x, y;
    cin >> n >> m >> k;
    int row=0, col=0;
    int a[n] = {0}, b[m] = {0};
    while(k--){
        cin >> x >> y;
        if (a[x-1]==0) row += 1;
        if (b[y-1]==0) col += 1;
        a[x-1] += 1;
        b[y-1] += 1;
    }
    cout << (long long)row * col;
    // system("pause");
    return 0;
}