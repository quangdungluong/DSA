// https://cses.fi/problemset/task/1073
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int n, k;
int main(){
    IOS;
    cin >> n;
    multiset<int> a;
    for (int i = 0; i < n; i++){
        cin >> k;
        auto it = a.upper_bound(k);
        if (it != a.end()){
            a.erase(it);
        }
        a.insert(k);
    }
    cout << a.size() << '\n';
    // system("pause");
    return 0;
}