// https://cses.fi/problemset/task/1084
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, m, k;
int main(){
    IOS;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0, ans=0;
    while (i < n && j < m){
        if (a[i]>=b[j]-k && a[i] <= b[j]+k){
            ans++; i++; j++;
        }
        else if (a[i] > b[j]) j++;
        else i++;
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}