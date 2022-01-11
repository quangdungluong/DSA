#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

string s;
vector<int> a(255);
vector<int> odd;
int main(){
    IOS;
    cin >> s;
    for (char c : s){
        a[c] += 1;
    }
    for (char i = 'a'; i <= 'z'; i++){
        if (a[i]%2) odd.push_back(i);
    }
    sort(odd.begin(), odd.end());
    int l = 0, r = odd.size()-1;
    while(l < r){
        a[odd[l]]++;
        a[odd[r]]--;
        l++;
        r--;
    }
    l = 0; r = s.size()-1;
    for (char i = 'a'; i <= 'z'; i++){
        while(a[i]>=2){
            s[l] = s[r] = i;
            a[i] -= 2;
            l++;
            r--;
        }
    }
    for (char i = 'a'; i <= 'z'; i++){
        if (a[i]==1){
            s[l] = i;
        }
    }
    cout << s << '\n';
    // system("pause");
    return 0;
}