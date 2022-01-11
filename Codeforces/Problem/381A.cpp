#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> card(n);
    for (int i = 0; i < n; i++) cin >> card[i];
    int i = 0, j = n - 1;
    int a = 0, b = 0, tmp = 0;
    while (i <= j) {
        int m = max(card[i], card[j]);
        if (card[i] > card[j]) {
            i++;
        }
        else {
            j--;
        }
        if ((tmp++) % 2) {
            b += m;
        }
        else {
            a += m;
        }
    }
    cout << a << " " << b << "\n";
    return 0;
}