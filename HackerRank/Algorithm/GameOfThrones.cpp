#include <bits/stdc++.h>

using namespace std;

// Complete the gameOfThrones function below.
string gameOfThrones(string s) {
    int a[26] = { 0 };
    for (auto x : s) {
        a[x - 'a']++;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++) {
        cnt += (a[i] % 2);
    }
    if (cnt <= 1) return "YES";
    return "NO";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = gameOfThrones(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
