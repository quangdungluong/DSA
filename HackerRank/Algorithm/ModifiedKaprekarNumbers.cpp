#include <bits/stdc++.h>

using namespace std;

// Complete the kaprekarNumbers function below.
int countDigit(long n)
{
    int digit = 0;
    while (n != 0)
    {
        digit++;
        n /= 10;
    }
    return digit;
}
bool check(long n)
{
    if (n == 1) return true;
    int k = countDigit(n) / 2 + (countDigit(n) % 2 == 1);
    long a = n / (long)pow(10, k);
    long b = n % (long)pow(10, k);
    return (a + b == sqrt(n));
}
void kaprekarNumbers(int p, int q)
{
    bool valid = false;
    for (long i = p; i <= q; i++)
    {
        long temp = long(i) * i;
        if (check(temp)) {
            cout << i << " ";
            valid = true;
        }
    }
    if (!valid)
        cout << "INVALID RANGE";
}

int main()
{
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    kaprekarNumbers(p, q);

    return 0;
}
