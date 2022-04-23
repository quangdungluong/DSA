#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

int main(){
    IOS;
    int t, rating;
    cin >> t;
    while(t--){
        cin >> rating;
        if (rating >= 1900){
            cout << "Division 1\n";
        }
        else if (rating >= 1600){
            cout << "Division 2\n";
        }
        else if (rating >= 1400){
            cout << "Division 3\n";
        }
        else cout << "Division 4\n";
    }
    // system("pause");
    return 0;
}