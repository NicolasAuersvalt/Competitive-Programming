#include <bits/stdc++.h>

using namespace std;

int main() {

    cin.tie(0);
    ios_base::sync_with_stdio(0);

    int qtd, parede;
    cin >> qtd;
    cin >> parede;
    parede++;

    // Vetores para marcar os pontos pintados por Gabrielle e Guilherme
    vector<int> paredeGa(parede, 0);  // Marca os pontos pintados por Gabrielle
    vector<int> paredeGu(parede, 0);  // Marca os pontos pintados por Guilherme

    // Pares - Gabrielle
    // Ímpares - Guilherme
    for (int i = 0; i < qtd; i++) {

        int ini = 0, fim = 0;
        cin >> ini >> fim;

        // Preenche todos os pontos entre ini e fim (inclusive)
        if (i % 2 == 0) { // Gabrielle
            for (int j = ini; j <= fim; j++) {
                paredeGa[j] = 1; // Marca o ponto como pintado por Gabrielle
            }
        } else { // Guilherme
            for (int j = ini; j <= fim; j++) {
                paredeGu[j] = 1; // Marca o ponto como pintado por Guilherme
            }
        }
    }

    int soma1, soma2;
	
    for (int i=0; i<qtd; i++){
	if(paredeGu[i] == paredeGa[i]){
			
	}
	else if(paredeGu[i] == 1){
		soma2++;
	}
	else{
		soma1++;
	}
    }

    // Compara as somas e decide quem pintou mais
    if (soma1 > soma2)
        cout << "Gabrielle" << endl;
    else if (soma1 == soma2)
        cout << "Empate" << endl;
    else
        cout << "Guilherme" << endl;

    return 0;
}
