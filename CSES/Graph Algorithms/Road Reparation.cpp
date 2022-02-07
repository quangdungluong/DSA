// https://cses.fi/problemset/task/1675
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

const int mx = 1e5+10;
int n, m, u, v, weight, cnt=0;
int parent[mx], r[mx];

struct Edge{
    int u, v, weight;
    bool operator<(Edge const& other){
        return weight < other.weight;
    }
};
void make_set(int v){
    parent[v] = v;
    r[v] = 0;
}
int find_set(int v){
    if (v==parent[v]) return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int u, int v){
    int a = find_set(u);
    int b = find_set(v);
    if (a!=b){
        cnt++;
        if (r[a] < r[b]) swap(a,b);
        parent[b] = a;
        if (r[a]==r[b]) r[a]++;
    }
}
int main(){
    IOS;
    cin >> n >> m;
    vector<Edge> edges;
    for (int i = 0; i < m; i++){
        cin >> u >> v >> weight;
        edges.push_back({u, v, weight});
    }
    sort(edges.begin(), edges.end());
    ll cost = 0;
    for (int i = 1; i <= n; i++) make_set(i);
    for (auto e : edges){
        if (find_set(e.u) != find_set(e.v)){
            cost += e.weight;
            union_sets(e.u, e.v);
        }
    }
    if (cnt==n-1) cout << cost << '\n';
    else cout << "IMPOSSIBLE\n";
    // system("pause");
    return 0;
}