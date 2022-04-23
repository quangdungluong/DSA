#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> petrolpumps = {{1,5}, {10, 3}, {3, 4}};
    vector<int> a, b;
    b.push_back(0);
    for (int i = 0; i < petrolpumps.size(); i++){
        a.push_back(petrolpumps[i][0] - petrolpumps[i][1]);
        b.push_back(b[i]+a[i]);
    }
    for (int i = 1; i <= petrolpumps.size(); i++){
        if (a[i-1] >= 0){
            bool is = true;
            for (int j = i+1; j <=petrolpumps.size(); j++){
                if (b[j]-b[i-1] < 0){
                    is = false;
                    break;
                }
            }
            if (is==true){
                cout << i-1;
                break;
            }
        }
    }
    system("pause");
    return 0;
}