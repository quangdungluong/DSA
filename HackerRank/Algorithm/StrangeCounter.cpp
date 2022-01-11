#include <bits/stdc++.h>

using namespace std;

// Complete the strangeCounter function below.
long strangeCounter(long t)
{
    long ini = 3;
    long time = 1;
    while (true)
    {
        if (t > time + ini - 1)
        {
            time = time + ini;
            ini *= 2;
        }
        else
        {
            return ini - (t - time);
        }
    }
    return time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    long t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = strangeCounter(t);

    fout << result << "\n";

    fout.close();

    return 0;
}
