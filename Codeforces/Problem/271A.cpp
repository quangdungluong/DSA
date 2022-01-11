#include <bits/stdc++.h>
using namespace std;

bool check(int y) {
    int a = y % 10;
    int b = (y / 10) % 10;
    int c = (y / 100) % 10;
    int d = y / 1000;
    return (a != b && a != c && a != d && b != c && b != d && c != d);
}
int main() {
    int y;
    cin >> y;
    while (!check(++y)) {
    }
    cout << y << '\n';
    return 0;
}