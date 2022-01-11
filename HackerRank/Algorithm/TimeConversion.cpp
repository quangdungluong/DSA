#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string hour = s.substr(0, 2);
    int h = stoi(hour);
    string check = s.substr(8);
    if (check == "AM") {
        string hour = to_string(h % 12);
        if (hour.size() < 2) hour = '0' + hour;
        return hour + s.substr(2, 6);
    }
    else {
        return to_string(h % 12 + 12) + s.substr(2, 6);
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
