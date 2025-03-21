#include <bits/stdc++.h>

using namespace std;

int dijkstra(int start, vector<vector<pair<int, int>>> &adj) {
    int n = adj.size();
    vector<int> dist(n, INT_MAX);  // Inicializa as distâncias com infinito
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;  // Fila de prioridade

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        // Verifica se a distância atual já é maior que a melhor distância encontrada
        if (d > dist[u]) continue;

        for (auto edge : adj[u]) {
            int v = edge.first;
            int peso = edge.second;

            if (dist[u] + peso < dist[v]) {
                dist[v] = dist[u] + peso;
                pq.push({dist[v], v});
            }
        }
    }

    // Retorna a soma das menores distâncias
    int soma = 0;
    for (int i = 0; i < n; i++) {
        if (dist[i] != INT_MAX) {
            soma += dist[i];
        }
    }
    return soma;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<pair<int, int>>> adj(m);

    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    cout << dijkstra(0, adj) << endl;

    return 0;
}

