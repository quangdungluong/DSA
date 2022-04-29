#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()
#define ll long long
#define ld long double

void shift(vector<int>& a, int start){
    int last = a[start];
    for (int i = start; i > 0; i--){
        a[i] = a[i-1];
    }
    a[0] = last;
}

int main() {
    IOS;
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> res(n, 0);
        int i = n;
        bool valid = true;
        while(i > 0){
            int index = find(a.begin(), a.end(), i) - a.begin();
            res[i-1] = (index + 1) % i;
            for (int j = 0; j < i-res[i-1]; j++) shift(a, i-1);
            i--;
        }
        for (int i = 0; i < n; i++) cout << res[i] << ' ';
        cout << '\n';
    }
    // system("pause");
    return 0;
}

