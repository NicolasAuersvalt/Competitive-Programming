class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {

        ios_base::sync_with_stdio(0);
        cin.tie(0);


        if(n==1)
            return true;


        // Vetor de visitado
        vector<int> visitado(n,0);

        // Lista de Adjacencia
        vector<vector<int>> adjacencia(n);

        // Percorre o vetor original
        for(auto posicao:edges){

            // Na posição correspondente ao valor do vetor no campo [0]
            adjacencia[posicao[0]].push_back(posicao[1]);

            // ** COMO É BIDIRECIONAL, vamos armazenar o inverso tb
            adjacencia[posicao[1]].push_back(posicao[0]);
        }

        // Criaremos uma queue recebendo como primeira entrada, o valor desejado
        queue<int> fila;
        fila.push(source);

        // Marca como visitado, já que estamos partindo dele
        visitado[source] = 1;

        // Enquanto a fila estiver com elemento
        while(!fila.empty()){

            // Pega o valor da fila e remove-o da fila
            int selecionado = fila.front();
            fila.pop();

            // Marca como visitado 
            visitado[selecionado]++;

            // Procura o DESEJADO na posição do SELECIONADO no vetor de adjacência
            for(int i=0; i<adjacencia[selecionado].size(); i++){

                // Se encontrar o valor, retorne como válido
                if(adjacencia[selecionado][i] == destination)
                    return true;

                // Se o valor não tiver sido visitado antes
                if(!visitado[adjacencia[selecionado][i]]){

                    // Sabendo que não foi visitado, vamos marcar o valor como visitado
                    visitado[adjacencia[selecionado][i]] = 1;

                    // Colocamos na fila para procurar a partir dele
                    fila.push(adjacencia[selecionado][i]);
                }
            }
        }

        // Significa que não achou, então a fila ficou vazia.
        return false;

    }
};