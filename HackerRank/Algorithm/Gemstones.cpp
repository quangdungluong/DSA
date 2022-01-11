#include <bits/stdc++.h>

using namespace std;

// Complete the gemstones function below.
int gemstones(vector<string> arr)
{
    int gem = 0;
    int t[26] = { 0 };
    for (int i = 0; i < arr.size(); i++)
    {
        sort(arr[i].begin(), arr[i].end());
        t[arr[i][0] - 'a']++;
        for (int j = 1; j < arr[i].size(); j++)
        {
            if (arr[i][j] != arr[i][j - 1])
                t[arr[i][j] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        gem += (t[i] == arr.size());
    }
    return gem;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> arr(n);

    for (int i = 0; i < n; i++) {
        string arr_item;
        getline(cin, arr_item);

        arr[i] = arr_item;
    }

    int result = gemstones(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
