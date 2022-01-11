#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
#define FOR(i, l, r) for (int i = l; i <= r; i++)
string encryption(string s)
{
    int row = floor(sqrt(s.length()));
    int col = ceil(sqrt(s.length()));
    if (row * col < s.length())
        row++;
    vector<string> str;
    FOR(i, 0, row - 1)
    {
        if (s.length() < i * col + col)
        {
            string temp = s.substr(i * col);
            while (temp.size() != col)
            {
                temp += " ";
            }
            str.push_back(temp);
        }
        else
            str.push_back(s.substr(i * col, col));
    }
    string ans = "";
    FOR(i, 0, col - 1)
    {
        FOR(j, 0, row - 1)
        {
            if (str[j][i] != ' ')
                ans += str[j][i];
        }
        ans += " ";
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
