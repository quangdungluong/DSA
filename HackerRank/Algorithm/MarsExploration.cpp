#include <bits/stdc++.h>

using namespace std;

// Complete the marsExploration function below.
int marsExploration(string s)
{
    int cnt = 0;
    for (int i = 0; i <= s.length() - 3; i += 3)
    {
        cnt += (s[i] != 'S');
        cnt += (s[i + 1] != 'O');
        cnt += (s[i + 2] != 'S');
    }
    return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
