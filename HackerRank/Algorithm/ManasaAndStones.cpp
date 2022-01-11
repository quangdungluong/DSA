#include <bits/stdc++.h>

using namespace std;

// Complete the stones function below.
#define FOR(i, l, r) for (int i = l; i <= r; i++)
vector<int> stones(int n, int a, int b)
{
    vector<int> ans;
    FOR(i, 0, n - 1)
    {
        int temp = i * a + (n - i - 1) * b;
        if (find(ans.begin(), ans.end(), temp) == ans.end()) ans.push_back(temp);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int T;
    cin >> T;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int T_itr = 0; T_itr < T; T_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int a;
        cin >> a;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int b;
        cin >> b;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<int> result = stones(n, a, b);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}
