#include <bits/stdc++.h>

using namespace std;

// Complete the biggerIsGreater function below.
#define FORD(i, r, l) for (int i = r; i >= l; i--)
#define FOR(i, l, r) for (int i = l; i <= r; i++)
string solve(vector<char> v, char c)
{
    string ans = "";
    sort(v.begin(), v.end());
    bool check = true;
    FOR(i, 0, v.size() - 1)
    {
        if (v[i] > c && check)
        {
            ans = v[i] + ans;
            check = false;
        }
        else
        {
            ans += v[i];
        }
    }
    return ans;
}
string biggerIsGreater(string w)
{
    string ans = "";
    vector<char> v;
    int idx = -1;
    v.push_back(w[w.size() - 1]);
    int i = w.size() - 2;
    while (1)
    {
        v.push_back(w[i]);
        if (w[i] < w[i + 1])
        {
            ans = solve(v, w[i]);
            idx = i;
            break;
        }
        i--;
    }
    if (idx == -1)
        return "no answer";
    FORD(i, idx - 1, 0)
    {
        ans = w[i] + ans;
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        string w;
        getline(cin, w);

        string result = biggerIsGreater(w);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
