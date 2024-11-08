class Solution {
public:

    void dfs(vector<vector<int>>&grafo, vector<vector<int>>&caminhos, vector<int>caminho, int comeco, int destino){

        caminho.push_back(comeco);

        if(comeco==destino){
            caminhos.push_back(caminho);
            return;
        }

        for(auto l:grafo[comeco]){
            dfs(grafo, caminhos, caminho, l, destino);
        }

    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);

        int tam = graph.size();
        int i=0;

        vector<vector<int>> caminhos;
        vector<int> caminho;

        if(tam == 0) return caminhos;

        dfs(graph, caminhos, caminho, 0, tam-1);

        return caminhos;

    }
};