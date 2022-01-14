// https://cses.fi/problemset/task/1668
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int mx = 1e5+10;
int n, m, u, v;
vector<int> adj_list[mx];
bool bad, visited[mx], g[mx];

void dfs(int node, bool group = 0){
    visited[node] = true;
    g[node] = group;
    for (int i:adj_list[node]){
        if (!visited[i]){
            dfs(i, !group);
        }
        else{
            if (g[i]==group) bad=1;
        }
    }
}
int main(){
    IOS;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    for (int i = 1; i <= n && !bad; i++){
        if (!visited[i]){
            dfs(i);
        }
    }
    if (bad){
        cout << "IMPOSSIBLE\n";
    }
    else{
        for (int i = 1; i <= n; i++) cout << g[i] + 1 << ' ';
    }
    // system("pause");
    return 0;
}