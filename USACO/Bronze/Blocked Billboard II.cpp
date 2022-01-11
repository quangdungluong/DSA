#include <bits/stdc++.h>
using namespace std;

bool covered(int x, int y, int x1, int x2, int y1, int y2) {
    return x >= x1 && x <= x2 && y >= y1 && y <= y2;
}
int main() {
    int x1, x2, y1, y2, x3, x4, y3, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;
    int corner = 0;
    corner += covered(x1, y1, x3, x4, y3, y4);
    corner += covered(x2, y2, x3, x4, y3, y4);
    corner += covered(x1, y2, x3, x4, y3, y4);
    corner += covered(x2, y1, x3, x4, y3, y4);
    if (corner < 2) cout << (x2 - x1) * (y2 - y1);
    else if (corner == 4) cout << 0;
    else {
        int left = max(x1, x3);
        int right = min(x2, x4);
        int top = min(y2, y4);
        int bottom = max(y1, y3);
        cout << (right - left) * (top - bottom);
    }
    system("pause");
    return 0;
}