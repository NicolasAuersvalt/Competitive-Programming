#include<bits/stdc++.h>
#define endl "\n"
#define INF 0x3f3f3f3f

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  vector<int> coins = {1, 2, 3, 4};
  int total = 9;
  vector<int> soma(total+1, 0);

  // Percorre todos os valores de 1 até o total máximo de moedas
  for(int valSel=1; valSel<=total; valSel++){

    // Define o infinito para a casa atual da soma
    soma[valSel] = INF;

    // Para o valor de cada moeda dada
    for(auto moeda:coins){

      // Calcula a diferença entre o valor selecionado e o da moeda
      int diferenca = valSel-moeda;

      // Se esse valor for positivo
      if(diferenca>=0){

        // Atualiza o valor armazenado (ou infinito, ou a *menor* soma) já realizada com o *mínimo* dos valores comparados
        soma[valSel] = min(soma[valSel], soma[diferenca] + 1);
      }
    } 
  }
  
  cout << soma[total] << endl;
    

  return 0;
}