#include<bits/stdc++.h>
using namespace std;
const int INF = -10E7;
std::vector<int> bfs(const std::vector<std::vector<int>>& adj, int s, int n) {
    std::vector<int> dist(n, -1);
    std::queue<int> q;
    dist[s] = 0;
    q.push(s);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);}}}
    return dist;}
int main(){
    int n, m, k; cin >> n >> m >> k;
    vector<int> cities(n,0), minDist(k,INF);
    vector<vector<int>> adj(n+1, vector<int> ());
    for(int i=0; i<n; i++){ 
        cin >> cities[i];
    }
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);}
    vector<int> dist = bfs(adj, 1, n+1);
    for(int i=0; i<cities.size(); i++){ // cidade na posição i
        if(minDist[cities[i]-1] < dist[i+1]){
            minDist[cities[i]-1] = dist[i+1];}}
    for(int i=0; i<minDist.size(); i++){
        cout << minDist[i] << " ";}
    return 0;
}