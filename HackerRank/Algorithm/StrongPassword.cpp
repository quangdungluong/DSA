#include <bits/stdc++.h>

using namespace std;

// Complete the minimumNumber function below.
#define FOR(i, l, r) for (int i = l; i <= r; ++i)
#define FORD(i, r, l) for (int i = r; i >= l; --i)

int minimumNumber(int n, string password) {
    // Return the minimum number of characters to make the password strong
    string special = "!@#$%^&*()-+";
    int a = 0, b = 0, c = 0, d = 0;
    FOR(i, 0, n - 1) {
        if (password[i] >= '0' && password[i] <= '9') a = 1;
        if (password[i] >= 'a' && password[i] <= 'z') b = 1;
        if (password[i] >= 'A' && password[i] <= 'Z') c = 1;
        if (special.find(password[i]) != string::npos) d = 1;
    }
    int ans = 4 - (a + b + c + d);
    if (ans + password.size() < 6) return 6 - password.size();
    else return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

    fout << answer << "\n";

    fout.close();

    return 0;
}
