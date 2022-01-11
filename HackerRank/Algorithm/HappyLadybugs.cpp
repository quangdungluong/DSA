#include <bits/stdc++.h>

using namespace std;

// Complete the happyLadybugs function below.
string happyLadybugs(string b)
{
    bool check = true;
    bool empty = false;
    int a[26] = { 0 };
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == '_')
            empty = true;
        else
        {
            a[b[i] - 'A']++;
            if (i == 0)
            {
                if (b[i] != b[i + 1])
                    check = false;
            }
            else if (i == b.size() - 1)
            {
                if (b[i] != b[i - 1])
                    check = false;
            }
            else
            {
                if (b[i] != b[i + 1] && b[i] != b[i - 1])
                    check = false;
            }
        }
    }
    if (check)
        return "YES";
    if (!empty)
        return "NO";
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != 0 && a[i] < 2)
            return "NO";
    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int g;
    cin >> g;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int g_itr = 0; g_itr < g; g_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string b;
        getline(cin, b);

        string result = happyLadybugs(b);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
