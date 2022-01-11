#include <bits/stdc++.h>

using namespace std;

// Complete the cavityMap function below.
#define FOR(i, l, r) for (int i = l; i <= r; i++)
vector<string> cavityMap(vector<string> grid)
{
    if (grid.size() < 2) return grid;
    int n = grid[0].size();
    vector<string> ans;
    ans.push_back(grid[0]);
    FOR(i, 1, grid.size() - 2)
    {
        FOR(j, 1, n - 2)
        {
            char c = grid[i][j];
            if (c > grid[i][j - 1] && c > grid[i][j + 1] && c > grid[i + 1][j] && c > grid[i - 1][j])
            {
                grid[i][j] = 'X';
                j++;
            }
        }
        ans.push_back(grid[i]);
    }
    ans.push_back(grid[grid.size() - 1]);
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        getline(cin, grid_item);

        grid[i] = grid_item;
    }

    vector<string> result = cavityMap(grid);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
