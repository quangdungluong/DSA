// https://codeforces.com/problemset/problem/920/E
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()


int n, m, u, v, cur;
const int mx = 2e5+10;
set<int> unvis;
unordered_set<int> adj[mx];
int sz[mx];

void dfs(int i){
    sz[cur]++;
    auto it = unvis.begin();
    while(it != unvis.end()){
        if (adj[i].count(*it)) it++;
        else{
            int last = *it;
            unvis.erase(it);
            dfs(last);
            it = unvis.upper_bound(last);
        }
    }
}

int main() {
    IOS;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    for (int i = 1; i <= n; i++) unvis.insert(i);
    for (int i = 1; i <= n; i++){
        auto it = unvis.find(i);
        if (it != unvis.end()){
            unvis.erase(it);
            dfs(i);
            cur++;
        }
    }
    cout << cur << '\n';
    sort(sz, sz+cur);
    for (int i = 0; i < cur; i++) cout << sz[i] << ' ';
    // system("pause");
    return 0;
}