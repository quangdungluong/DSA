// https://cses.fi/problemset/task/1676
#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define double long double

const int mx = 1e5+10;
int n, m, u, v;
int parent[mx], r[mx], c[mx];
multiset<int, greater<int>> s;

bool cmp(pair<int, int> p1, pair<int, int> p2){
    return p1.second < p2.second;
}
void make_set(int v){
    parent[v] = v;
    r[v] = 0;
    c[v] = 1;
    s.insert(1);
}
int find_set(int v){
    if (v==parent[v]) return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int u, int v){
    int a = find_set(u), b = find_set(v);
    if (a != b){
        if (r[a] < r[b]) swap(a,b);
        parent[b] = a;
        if (r[a]==r[b]) r[a]++;
        s.erase(s.find(c[a]));
        s.erase(s.find(c[b]));
        c[a] += c[b];
        s.insert(c[a]);
    }
    cout << s.size() << ' ' << *s.begin() << '\n';
}
int main(){
    IOS;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) make_set(i);
    for (int i = 0; i < m; i++){
        cin >> u >> v;
        union_sets(u, v);
    }
    // system("pause");
    return 0;
}