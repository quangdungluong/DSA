#include <bits/stdc++.h>
using namespace std;


int main() {
    int x1, x2, x3, x4, y1, y2, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    int left = min(x1, x3);
    int right = max(x2, x4);
    int top = max(y2, y4);
    int bottom = min(y1, y3);
    cout << pow(max(right - left, top - bottom), 2);
    system("pause");
    return 0;
}