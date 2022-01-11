#include <bits/stdc++.h>

using namespace std;

// Complete the extraLongFactorials function below.
vector<int> multiply(vector<int> factorial, int k)
{
    int carry = 0;
    for (int i = 0; i < factorial.size(); i++)
    {
        int temp = k * factorial[i] + carry;
        factorial[i] = temp % 10;
        carry = temp / 10;
    }
    while (carry)
    {
        factorial.push_back(carry % 10);
        carry /= 10;
    }
    return factorial;
}
void extraLongFactorials(int n)
{
    vector<int> factorial = { 1 };
    for (int i = 2; i <= n; i++)
    {
        factorial = multiply(factorial, i);
    }
    string ans = "";
    for (int i = 0; i < factorial.size(); i++)
    {
        ans = to_string(factorial[i]) + ans;
    }
    cout << ans << endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    extraLongFactorials(n);

    return 0;
}
