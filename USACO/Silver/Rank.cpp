// https://dmoj.ca/problem/acsl1p4
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define all(a) a.begin(),a.end()
#define ll long long
#define ld long double

const int max_N = 20;
vector<vector<int>> adj(max_N);
bool vis[max_N], cyclic[max_N];
int original_node;

void dfs(int node){
    vis[node] = true;
    if (node == original_node){
        cyclic[node] = true;
        return;
    }
    for (auto x : adj[node]){
        if (!vis[x]) dfs(x);
    }
}
int main() {
    IOS;
    int n, k, a, b, sa, sb;
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        cin >> a >> b >> sa >> sb;
        if (sa > sb){
            adj[a-1].push_back(b-1);
        }
        else{
            adj[b-1].push_back(a-1);
        }
    }
    for (int i = 0; i < n; i++){
        original_node = i;
        fill(vis, vis+max_N, false);
        for (auto x : adj[i]){
            dfs(x);
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++){
        ans += (cyclic[i]==true);
    }
    cout << ans << '\n';
    // system("pause");
    return 0;
}