#include <bits/stdc++.h>
using namespace std;

int solve(string a, string b){
    map<char, int> m;
    for (int i=0; i < a.size(); i++){
        m[a[i]] = i;
    }
    int result = 0;
    for (int i=1; i < b.size(); i++){
        result += abs(m[b[i]]-m[b[i-1]]);
    }
    return result;
}
int main(){
    int t;
    string a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << solve(a,b) << '\n';
    }
    return 0;
}