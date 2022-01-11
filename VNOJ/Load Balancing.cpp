#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int n;
int main(){
    IOS;
    cin >> n;
    int a[n];
    int sum = 0, res = 0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int m = sum/n, count = sum%n;
    for (int i = 0; i < n; i++){
        if (a[i] > m){
            if (count){
                res += (a[i]-m-1);
                count--;
            }
            else res += (a[i]-m);
        }
    }
    cout << res;
    // system("pause");
    return 0;
}