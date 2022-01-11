#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ld long double
const ld PI = acos(-1);

struct Point{
    ld x,y;
};
ld solve(ld x1, ld y1, ld r1, ld x2, ld y2, ld r2){
    ld d = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    if (d < r1+r2){
        if (d <= abs(r2-r1)){
            return PI * min(r1*r1,r2*r2);
        }
        ld arg1 = acos((r1*r1-r2*r2+d*d)/(2*d*r1));
        ld arg2 = acos((r2*r2-r1*r1+d*d)/(2*d*r2));
        return arg1*r1*r1+arg2*r2*r2 - r1*r1*sin(arg1)*cos(arg1) - r2*r2*sin(arg2)*cos(arg2);
    }
    return 0;
}
int main(){
    IOS;
    Point a,b; ld r1,r2;
    cin>>a.x>>a.y>>r1>>b.x>>b.y>>r2;
    if (r1>r2){
        swap(a,b);
        swap(r1,r2);
    }
    cout << fixed << setprecision(10) << solve(a.x,a.y,r1,b.x,b.y,r2) << '\n';
    // system("pause");
    return 0;
}