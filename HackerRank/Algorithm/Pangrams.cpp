#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s)
{
    int t[26] = { 0 };
    int cnt = 0;
    for (auto x : s)
    {
        if (x != ' ')
        {
            if (x >= 'A' && x <= 'Z')
            {
                if (t[x - 'A'] == 0)
                    cnt++;
                t[x - 'A']++;
            }
            else
            {
                if (t[x - 'a'] == 0)
                    cnt++;
                t[x - 'a']++;
            }
        }
    }
    if (cnt == 26)
        return "pangram";
    else
        return "not pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
