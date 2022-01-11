// https://codeforces.com/problemset/problem/1560/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, k, i=1;
    vector<int> a;
    while(a.size() < 1000){
        if (i%3!=0 && i%10!=3){
            a.push_back(i);
        }
        i += 1;
    }
    cin >> t;
    while (t--){
        cin >> k;
        cout << a[k-1] << '\n';
    }
    return 0;
}