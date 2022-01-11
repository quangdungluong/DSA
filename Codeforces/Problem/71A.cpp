#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    string n;
    while (k > 0)
    {
        k--;
        string n;
        cin >> n;
        if (n.size() > 10)
        {
            cout << n[0] << to_string(n.size() - 2) << n[n.size() - 1] << '\n';
        }
        else
            cout << n << '\n';
    }
}