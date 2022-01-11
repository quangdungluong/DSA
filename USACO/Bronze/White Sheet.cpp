#include <bits/stdc++.h>
using namespace std;

struct Rect {
    long long x1, y1, x2, y2;
    long long area() { return (x2 - x1) * (y2 - y1); }
};
long long intersection(Rect a, Rect b) {
    long long width = max((min(a.x2, b.x2) - max(a.x1, b.x1)), (long long)0);
    long long height = max((min(a.y2, b.y2) - max(a.y1, b.y1)), (long long)0);
    return width * height;
}
long long intersectionThree(Rect a, Rect b, Rect c) {
    long long xOverlap = max(min(min(a.x2, b.x2), c.x2) - max(max(a.x1, b.x1), c.x1), (long long)0);
    long long yOverlap = max(min(min(a.y2, b.y2), c.y2) - max(max(a.y1, b.y1), c.y1), (long long)0);
    return xOverlap * yOverlap;
}
int main() {
    Rect w, b1, b2;
    cin >> w.x1 >> w.y1 >> w.x2 >> w.y2;
    cin >> b1.x1 >> b1.y1 >> b1.x2 >> b1.y2;
    cin >> b2.x1 >> b2.y1 >> b2.x2 >> b2.y2;
    long long vis = w.area() - (intersection(w, b1) + intersection(w, b2)) + intersectionThree(w, b1, b2);
    if (vis) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}