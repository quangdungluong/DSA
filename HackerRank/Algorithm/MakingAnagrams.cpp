#include <bits/stdc++.h>

using namespace std;

// Complete the makingAnagrams function below.
#define FOR(i, l, r) for (int i = l; i <= r; i++)
int makingAnagrams(string s1, string s2)
{
    int a[26] = { 0 }, b[26] = { 0 };
    FOR(i, 0, s1.size() - 1)
    {
        a[s1[i] - 'a']++;
    }
    FOR(i, 0, s2.size() - 1)
    {
        b[s2[i] - 'a']++;
    }
    int cnt = 0;
    FOR(i, 0, 25)
        cnt += min(a[i], b[i]);
    return s1.size() + s2.size() - 2 * cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s1;
    getline(cin, s1);

    string s2;
    getline(cin, s2);

    int result = makingAnagrams(s1, s2);

    fout << result << "\n";

    fout.close();

    return 0;
}
