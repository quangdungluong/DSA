#include <bits/stdc++.h>

using namespace std;

// Complete the anagram function below.
#define FOR(i, l, r) for (int i = l; i <= r; i++)
int anagram(string s)
{
    if (s.size() % 2)
        return -1;
    int cnt = 0;
    int a[26] = { 0 }, b[26] = { 0 };
    FOR(i, 0, s.size() / 2 - 1)
    {
        a[s[i] - 'a']++;
    }
    FOR(i, s.size() / 2, s.size() - 1)
    {
        b[s[i] - 'a']++;
    }
    FOR(i, 0, 25)
    {
        cnt += min(a[i], b[i]);
    }
    return s.size() / 2 - cnt;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        int result = anagram(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
