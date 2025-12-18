#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

int n;
vector<ll> tree;

// Função de construção: Complexidade O(N)
void build(const vector<int>& input) {
    // 1. Copia o input para as folhas (posições n até 2n-1)
    for (int i = 0; i < n; i++) {
        tree[n + i] = input[i];
    }
    
    // 2. Calcula os pais de baixo para cima (posições n-1 até 1)
    for (int i = n - 1; i >= 1; i--) {
        tree[i] = tree[2 * i] + tree[2 * i + 1];
    }
}

// Função de Update: Complexidade O(log N)
void update(int p, int value) {
    // Vamos para a posição da folha na árvore
    p += n; 
    
    // Atualizamos a folha
    tree[p] = value;
    
    // Subimos atualizando os pais
    // p > 1 garante que não passamos da raiz
    for (; p > 1; p /= 2) {
        // O pai (p/2) é a soma dos filhos (p) e (p^1)
        // p^1 é o irmão: se p é par, p^1 é p+1; se p é ímpar, p^1 é p-1
        tree[p >> 1] = tree[p] + tree[p ^ 1]; 
    }
}

// Função de Query: Complexidade O(log N)
// Intervalo [l, r] inclusivo, 0-based
ll query(int l, int r) {
    ll sum = 0;
    
    // Movemos para as folhas
    l += n;
    r += n;
    
    while (l <= r) {
        // Se l é ímpar, significa que é filho à direita.
        // Ele deve ser somado, mas o pai dele não está totalmente incluso.
        if (l % 2 == 1) {
            sum += tree[l];
            l++; // Move para o próximo bloco à direita
        }
        
        // Se r é par, significa que é filho à esquerda.
        // Ele deve ser somado, mas o pai dele não está totalmente incluso.
        if (r % 2 == 0) {
            sum += tree[r];
            r--; // Move para o próximo bloco à esquerda
        }
        
        // Sobe para os pais
        l /= 2;
        r /= 2;
    }
    return sum;
}

int main() {
    // Otimização de I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    if (!(cin >> n >> q)) return 0;

    // Alocamos 2*n. O tamanho 2*n é suficiente e seguro.
    tree.resize(2 * n);
    
    vector<int> input(n);
    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    build(input);

    while (q--) {
        int type, a, b;
        cin >> type >> a >> b;
        
        if (type == 1) {
            // Update: muda valor na posição k para u
            // CSES é 1-based, convertemos para 0-based
            update(a - 1, b); 
        } else {
            // Sum Query: soma de a até b
            // CSES é 1-based, convertemos para 0-based
            cout << query(a - 1, b - 1) << "\n";
        }
    }

    return 0;
}