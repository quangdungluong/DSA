#include <bits/stdc++.h>

using namespace std;

// Complete the jimOrders function below.
vector<int> jimOrders(vector<vector<int>> orders)
{
    vector<pair<int, int>> order;
    for (int i = 0; i < orders.size(); i++)
    {
        order.push_back({ orders[i][0] + orders[i][1], i + 1 });
    }
    sort(order.begin(), order.end());
    vector<int> ans;
    for (int i = 0; i < order.size(); i++)
    {
        ans.push_back(order[i].second);
    }
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> orders(n);
    for (int i = 0; i < n; i++) {
        orders[i].resize(2);

        for (int j = 0; j < 2; j++) {
            cin >> orders[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    vector<int> result = jimOrders(orders);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
