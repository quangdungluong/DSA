#include <bits/stdc++.h>

using namespace std;

// Complete the candies function below.
#define FORD(i, r, l) for (int i = r; i >= l; i--)
#define FOR(i, l, r) for (int i = l; i <= r; i++)
long candies(int n, vector<int> arr)
{
    vector<int> a(arr.size(), 1);
    FOR(i, 1, arr.size() - 1)
    {
        if (arr[i] > arr[i - 1])
            a[i] += a[i - 1];
    }
    FORD(i, arr.size() - 2, 0)
    {
        if (arr[i] > arr[i + 1] && a[i] < a[i + 1] + 1)
            a[i] = a[i + 1] + 1;
    }
    long result = 0;
    FOR(i, 0, arr.size() - 1)
    {
        result += a[i];
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item;
        cin >> arr_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        arr[i] = arr_item;
    }

    long result = candies(n, arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
