#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
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
            for (int i = 0; /i < N; i++)
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