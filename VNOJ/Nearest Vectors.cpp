#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int n, x, y, a, b;
vector<pair<long double, int>> v;
long double sum = 1e5;
int main(){
    IOS;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> x >> y;
        v.push_back({atan2(y,x), i});
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++){
        long double angle = v[(i+1)%n].first - v[i].first;
        if (angle < 0) angle += 2*acos(-1);
        if (angle < sum){
            sum = angle;
            a = v[(i+1)%n].second;
            b = v[i].second;
        }
    }
    cout << a << ' ' << b;
    // system("pause");
    return 0;
}