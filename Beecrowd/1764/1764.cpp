#include<bits/stdc++.h>

using namespace std;

typedef vector<int> vi;
typedef pair<int, int> ii; 

class UnionFind { // OOP style

    private: 
        vi p, rank; // remember: vi is vector<int>

    public:

        UnionFind(int N) {

            // Zera os vetores
            rank.assign(N, 0);
            p.assign(N, 0); 

            // Inicializa o vetor com valores ordenados
            for (int i = 0; i < N; i++)
                p[i] = i; 
        }

        // Retorna o pai do conjunto o qual i pertence
        int findSet(int i) {
            return (p[i] == i) ? i : (p[i] = findSet(p[i])); 
            }

        // Verifica se os dois elementos pertencem ao mesmo conjunto
        bool isSameSet(int i, int j) { 
            return findSet(i) == findSet(j); 
        }

        // Une os dois conjuntos
        void unionSet(int i, int j) {

            // Verifica se são conjuntos diferentes
            if (!isSameSet(i, j)) { 

                // Pega os pais dos dois conjuntos
                int x = findSet(i), y = findSet(j);

                // Verifica qual tem a maior altura e balanceia
                if (rank[x] > rank[y])
                    p[y] = x; 
                else {
                    p[x] = y;
            
                    // Se os dois conjuntos possuirem mesma altura
                    if (rank[x] == rank[y]) 
                        rank[y]++; 
                }
        
           }   
        } 
    };

int main(){

    while(true){ 

        vector< pair<int, ii> > EdgeList; // (weight, two vertices) of the edge

        int E, J; // E - Numero de Cidades e J - Numero de Ligações

        cin >> E >> J;
        
        if(E==0 && J==0){return 0;}

        for (int i = 0; i < J; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            EdgeList.push_back(make_pair(w, ii(u, v)));   // (w, u, v)

        }

        // Ordena pelos menores pesos em O(E log E)
        sort(EdgeList.begin(), EdgeList.end());

        int mst_cost = 0; // Variável do custo total

        UnionFind UF(E); // Cria o conjunto completamente disjunto inicialmente

        for (int i = 0; i < J; i++) { // Para cada aresta em EdgeList

            pair<int, ii> front = EdgeList[i]; // Pega a aresta

            // Verifica se o a partida está no mesmo conjunto que a chegada
            if (!UF.isSameSet(front.second.first, front.second.second)) {

                // Se não tiver, soma o custo total
                mst_cost += front.first; 

                // Une os dois conjuntos
                UF.unionSet(front.second.first, front.second.second); 

            } 
        }

        cout << mst_cost << endl;
        }
    }

