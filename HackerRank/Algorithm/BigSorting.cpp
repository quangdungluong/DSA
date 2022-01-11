#include <bits/stdc++.h>

using namespace std;

// Complete the bigSorting function below.
#define FOR(i, l, r) for (int i = l; i <= r; i++)

bool cmpStr(string a, string b)
{
    if (a.size() != b.size())
    {
        return (a.size() > b.size());
    }
    FOR(i, 0, a.size() - 1)
    {
        if (a[i] != b[i])
        {
            return (a[i] > b[i]);
        }
    }
    return false;
}
void swap(string* a, string* b)
{
    string temp = *a;
    *a = *b;
    *b = temp;
}
void bigSorting(vector<string>& arr, int l, int r)
{
    //a > b shift a to the right
    string p = arr[(l + r) / 2];
    int i = l, j = r;
    while (i < j)
    {
        while (cmpStr(p, arr[i]))
            i++;
        while (cmpStr(arr[j], p))
            j--;
        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    if (i < r)
        bigSorting(arr, i, r);
    if (l < j)
        bigSorting(arr, l, j);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<string> unsorted(n);

    for (int i = 0; i < n; i++) {
        string unsorted_item;
        getline(cin, unsorted_item);

        unsorted[i] = unsorted_item;
    }

    bigSorting(unsorted, 0, unsorted.size() - 1);

    for (int i = 0; i < unsorted.size(); i++) {
        fout << unsorted[i];

        if (i != unsorted.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
