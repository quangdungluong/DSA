// https://cses.fi/problemset/task/1666
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int mx = 1e5+1;
int n, m , u , v, rep[mx];
vector<int> adj_list[mx];
bool visited[mx];
void dfs(int node){
    visited[node] = true;
    for (int i : adj_list[node]){
        if (!visited[i]) dfs(i);
    }
}
int count_components(){
    int count = 0;
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            rep[count++] = i;
            dfs(i);
        }
    }
    return count;
}
int main(){
    IOS;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    int ans = count_components();
    cout << ans - 1 << '\n';
    for (int i = 1; i < ans; i++){
        cout << rep[i-1] << ' ' << rep[i] << '\n';
    }
    // system("pause");
    return 0;
}