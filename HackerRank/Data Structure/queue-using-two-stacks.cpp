#include <bits/stdc++.h>
using namespace std;

int main() {
    int q, type, x;
    cin >> q;
    stack<int> front, rear;
    while (q--) {
        cin >> type;
        if (type == 1) {
            cin >> x;
            rear.push(x);
        }
        else {
            if (front.empty()) {
                while (!rear.empty()) {
                    front.push(rear.top());
                    rear.pop();
                }
            }
            if (!front.empty()) {
                if (type == 2) {
                    front.pop();
                }
                if (type == 3) {
                    cout << front.top() << endl;
                }
            }
        }
    }
    return 0;
}