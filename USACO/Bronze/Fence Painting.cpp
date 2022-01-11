#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    // if c<=a and b <=d
    int total = (b - a) + (d - c);
    int intersection = max(0, (min(b, d) - max(a, c)));
    cout << total - intersection;
    system("pause");
    return 0;
}