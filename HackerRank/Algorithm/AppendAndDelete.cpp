#include <bits/stdc++.h>

using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k)
{
    int i = 0;
    while (i < s.length() && i < t.length() && s[i] == t[i])
        i++;
    int charChange = (s.length() - i) + (t.length() - i);
    if (k < charChange)
        return "No";
    if (charChange % 2 == 1 && k % 2 == 0)
        return "No";
    return "Yes";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    fout << result << "\n";

    fout.close();

    return 0;
}
