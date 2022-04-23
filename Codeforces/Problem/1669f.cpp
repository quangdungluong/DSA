#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int main(){
    IOS;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n), l(n), r(n);
        for (int i = 0; i < n; i++){
            cin >> v[i];
        }
        l[0] = v[0]; r[n-1] = v[n-1];
        for (int i = 1; i < n; i++) l[i] = v[i] + l[i-1];
        for (int i = n-2; i >= 0; i--) r[i] = v[i] + r[i+1];
        int res = 0;
        int left = 0, right = n-1;
        while(left < right){
            if (l[left]==r[right]) {res = left + 1 + (n - right); left++;}
            else if (l[left]> r[right]) right--;
            else left++;
        }
        cout << res << '\n';
    }
    // system("pause");
    return 0;
}