#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define ll long long
#define ALL(a) a.begin(),a.end()
#define sz(a) (int)a.size()

string timeInWords(int h, int m) {
    vector<string> v = { "zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine" };
    if (m == 0) return v[h] + " o' clock";
    if (m == 15) return "quarter past " + v[h];
    if (m == 30) return "half past " + v[h];
    if (m == 45) return "quarter to " + v[h + 1];
    if (m < 30) {
        if (m == 1) return v[m] + " minute past " + v[h];
        return v[m] + " minutes past " + v[h];
    }

    if (m > 30) {
        if (m == 59) return v[60 - m] + " minute to " + v[h + 1];
        return v[60 - m] + " minutes to " + v[h + 1];
    }
    return "";
}

int main() {
    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << timeInWords(h, m) << "\n";
    return 0;
}