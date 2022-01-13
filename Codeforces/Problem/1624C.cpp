// https://codeforces.com/contest/1624/problem/C
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int t, n, x;
int main(){
    IOS;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> cnt(n+1, 0);
        for (int i = 0; i < n; i++){
            cin >> x;
            while(x > n){
                x /= 2;
            }
            cnt[x]++;
        }
        bool is = true;
        for (int i = n; i > 0; i--){
            if (cnt[i]==0) {
                is=false;
                break;
            }
            cnt[i]--;
            cnt[i/2] += cnt[i];
        }
        cout << (is ? "YES\n" : "NO\n");
    }
    // system("pause");
    return 0;
}