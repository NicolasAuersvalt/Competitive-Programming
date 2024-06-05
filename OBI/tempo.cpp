#include <iostream>
using namespace std;

int main() {
    int n = 0;

    cin >> n;
    cin.ignore();

    int i, j, tempo[100] = {0};
    char vet[100];
    char papai = 'n';

    for (int i = 0; i < 100; i++) {
        vet[i] = papai;
    }

    for (i = 0; i < n; i++) {
        char status;
        int amigo;

        // Recebe o status e o amigo
        cin >> status >> amigo;
        cin.ignore();

        if (vet[amigo] == 'Falha') {
            // Ignora entradas após falha
            continue;
        }

        if (status == 'T') {
            // Percorrerá todo o vetor
            for (j = 0; j < 100; j++) {
                // Se a conversa estiver em aberto
                if (vet[j] == 'R') {
                    // Somará o intervalo de tempo (amigo)
                    tempo[j] += amigo;
                }
            }
        } else if ((vet[amigo] != status || vet[amigo] == papai) && vet[amigo] != 'Falha') {
            // Intervalo de 1s entre mensagens, só incrementa tempo se não for 'Falha'
            if (vet[amigo] != papai) {
                tempo[amigo]++;
            }
            // Atualiza o status da conversa com o amigo
            vet[amigo] = status;
        } else if (vet[amigo] == status) {
            tempo[amigo] = -1;
            vet[amigo] = 'Falha';
        }
    }

    // Mostrará o tempo de conversa
    for (i = 0; i < 100; i++) {
        // Ignora entradas não usadas
        if (vet[i] == papai) {
            continue;
        }

        if (vet[i] == 'Falha') {
            cout << i << " " << -1 << endl;
        } else if (vet[i] == 'E') {
            cout << i << " " << tempo[i] - 1 << endl; // Ajusta o tempo para não contar o segundo adicional
        } else {
            cout << i << " " << tempo[i] << " " << vet[i] << endl;
        }
    }

    return 0;
}
