#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s)
{
    stack<char> temp;
    for (auto i : s) {
        if (temp.empty()) {
            temp.push(i);
        }
        else {
            if (i == temp.top()) {
                temp.pop();
            }
            else {
                temp.push(i);
            }
        }
    }
    if (temp.empty()) return "Empty String";
    string ans = "";
    while (!temp.empty())
    {
        ans = temp.top() + ans;
        temp.pop();
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
