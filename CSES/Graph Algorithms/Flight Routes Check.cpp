// https://cses.fi/problemset/task/1682
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

// can[u][v] is true if can go from vertex u to v
// G is directed graph and G' is reverse
// If can[1][x] for 1<=x<=n in both G and G' -> YES

const int mx = 1e5+10;
int n, m, u, v;
vector<int> adj_list[mx][2];
bool visited[mx];

void dfs(int node, int i){
    visited[node] = true;
    for (int j : adj_list[node][i]){
        if (!visited[j]){
            visited[j] = true;
            dfs(j, i);
        }
    }
}
int main(){
    // IOS;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        adj_list[u][0].push_back(v);
        adj_list[v][1].push_back(u);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            cout << "NO\n";
            cout << 1 << ' ' << i << '\n';
            return 0;
        }
    }
    memset(visited, 0, sizeof(visited));
    dfs(1,1);
    for (int i = 1; i <= n; i++){
        if (!visited[i]){
            cout << "NO\n";
            cout << i << ' ' << 1 << '\n';
            return 0;
        }
    }
    cout << "YES\n";
    // system("pause");
    return 0;
}