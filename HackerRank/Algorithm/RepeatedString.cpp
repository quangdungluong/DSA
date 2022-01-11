#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long ans = 0;
    for (auto x : s) {
        ans += (x == 'a');
    }
    ans *= (n / s.size());
    for (int i = 0; i < n - (n / s.size()) * s.size(); i++) {
        ans += (s[i] == 'a');
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
