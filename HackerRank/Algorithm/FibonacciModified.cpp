#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for (int i = l; i <= r; i++)
#define FORD(i,r,l) for (int i = r; i >= l; i--)
#define ll long long
#define ALL(a) a.begin(),a.end()
#define sz(a) (int)a.size()

vector<string> split_string(string input_string);
vector<int> mulVec(vector<int> a, vector<int> b) {
    vector<int> tmp(sz(a) + sz(b));
    FOR(i, 0, sz(a) - 1) {
        FOR(j, 0, sz(b) - 1) {
            tmp[i + j] += a[i] * b[j];
            tmp[i + j + 1] += tmp[i + j] / 10;
            tmp[i + j] %= 10;
        }
    }
    while (tmp[sz(tmp) - 1] == 0) {
        tmp.pop_back();
    }
    return tmp;
}
vector<int> sumVec(vector<int> a, vector<int> b) {
    int size = max(sz(a), sz(b));
    a.resize(size);
    b.resize(size);
    vector<int> tmp(size + 1);
    FOR(i, 0, size - 1) {
        tmp[i] += a[i] + b[i];
        tmp[i + 1] += tmp[i] / 10;
        tmp[i] %= 10;
    }
    while (tmp[sz(tmp) - 1] == 0) {
        tmp.pop_back();
    }
    return tmp;
}
string fibonacciModified(int t1, int t2, int n) {
    vector<int> a = { t1 };
    vector<int> b = { t2 };
    FOR(i, 3, n) {
        vector<int> tmp = sumVec(a, mulVec(b, b));
        a = b;
        b = tmp;
    }
    string ans = "";
    FOR(i, 0, sz(b) - 1) {
        ans = to_string(b[i]) + ans;
    }
    return ans;
}
int main()
{
    string t1T2n_temp;
    getline(cin, t1T2n_temp);

    vector<string> t1T2n = split_string(t1T2n_temp);

    int t1 = stoi(t1T2n[0]);

    int t2 = stoi(t1T2n[1]);

    int n = stoi(t1T2n[2]);

    cout << fibonacciModified(t1, t2, n) << '\n';

    system("pause");

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char& x, const char& y) {
        return x == y and x == ' ';
        });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
