#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    int n;
    string s;
    cin >> n;
    ll sum = 0;
    while (n--) {
        cin >> s;
        if (s == "Tetrahedron") {
            sum += 4;
        }
        else if (s == "Cube") {
            sum += 6;
        }
        else if (s == "Octahedron") {
            sum += 8;
        }
        else if (s == "Dodecahedron") {
            sum += 12;
        }
        else sum += 20;
    }
    cout << sum << '\n';
    return 0;
}