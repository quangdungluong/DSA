// https://codeforces.com/contest/862/problem/B
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int mx  = 1e5+10;
int n, u, v;
vector<int> adj_list[mx];
bool visited[mx];
ll l=0, r=0;

void dfs(int node, int parent, bool g){
    if (g) l++;
    else r++;
    for (int i : adj_list[node]){
        if (i != parent) dfs(i, node, !g);
    }
}
int main(){
    IOS;
    cin >> n;
    for (int i = 0; i < n-1; i++){
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    dfs(1, 0, 0);
    cout << l*r-(n-1) << '\n';
    // system("pause");
    return 0;
}