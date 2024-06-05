#include <iostream>
using namespace std;

int main() {
    int n = 0;

    cin >> n;
    cin.ignore();

    int i, j, tempo[100] = {0};
    char vet[100] = {0}, papai = 'n';

    for (int i = 0; i < 100; i++) {
        vet[i] = papai;
    }

    for (i = 0; i < n; i++) {
        char status;
        int amigo;

        // Recebe o status e o amigo
        cin >> status >> amigo;
        cin.ignore();

        // Somará a quantidade de tempo (que será amigo para evitar armazenamento extra)
        if (status == 'T') {

            // Percorrerá todo o vetor
            for (j = 0; j < 100; j++) {

                // Se a conversa estiver em aberto
                if (vet[j] == 'R') {

                    // Somará o intervalo de tempo (amigo)
                    tempo[j] += amigo-1;
                }
            }
        }

        else if(vet[amigo] == status){
            tempo[amigo] = -1;
            vet[amigo] = 'F';
        }

        // Evitar caso que Recebe e Recebe
        else if (vet[amigo] != status) {
            
            // Intervalo de 1s entre mensagens
            tempo[amigo]++;

            // Atualiza o status da conversa com o amigo
            vet[amigo] = status;
        }

        
        
    }

    // Mostrará o tempo de conversa
    for (i = 0; i < 100; i++) {

        // cout << i << " " << tempo[i] << " " << vet[i] <<endl;

        // Não respondeu
        if (vet[i] == 'F' || vet[i] == 'R') {
            cout << i << " " << -1 << endl;

        // Respondeu
        } else if (vet[i] == 'E') {
            cout << i << " " << tempo[i] << endl;
        }
    }

    return 0;
}
