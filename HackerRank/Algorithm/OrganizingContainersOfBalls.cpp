#include <bits/stdc++.h>

using namespace std;

// Complete the organizingContainers function below.
#define FOR(i, l, r) for (int i = l; i <= r; i++)
#define ll long long
string organizingContainers(vector<vector<int>> container)
{
    vector<ll> quantity;
    FOR(i, 0, container.size() - 1)
    {
        ll sum = 0;
        FOR(j, 0, container[i].size() - 1)
        {
            sum += container[i][j];
        }
        quantity.push_back(sum);
    }
    vector<ll> check;
    FOR(i, 0, container[0].size() - 1)
    {
        ll sum = 0;
        FOR(j, 0, container.size() - 1)
        {
            sum += container[j][i];
        }
        check.push_back(sum);
    }
    sort(quantity.begin(), quantity.end());
    sort(check.begin(), check.end());
    FOR(i, 0, container.size() - 1)
    {
        if (quantity[i] != check[i])
            return "Impossible";
    }
    return "Possible";
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<vector<int>> container(n);
        for (int i = 0; i < n; i++) {
            container[i].resize(n);

            for (int j = 0; j < n; j++) {
                cin >> container[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        string result = organizingContainers(container);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
