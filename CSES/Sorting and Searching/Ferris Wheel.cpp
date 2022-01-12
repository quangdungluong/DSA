// https://cses.fi/problemset/task/1090
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, x;
int main(){
    IOS;
    cin >> n >> x;
    vector<int> p(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    sort(p.begin(), p.end());
    int i=0, j=n-1, ans=0;
    while(i<=j){
        if (p[i]+p[j]<=x){
            i++; j--;
        }
        else{
            j--;
        }
        ans++;
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}