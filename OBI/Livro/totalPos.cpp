#include<bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  vector<int> coins = {1, 3, 4};
  int total = 5; // m = 5;
  vector<int> count(total+1, 0); 

  // Inicia o vetor soma com 0 pois não temos nenhuma moeda
  count[0] = 1;

  // Percorre todos os valores de 1 até o total máximo de moedas
  for(int valSelec=1;valSelec<=total;valSelec++){

    for(int i=0;i<count.size();i++){
      cout << count[i] << " " ;
    }
    cout << endl;

    // Para cada valor de moeda no vetor
    for(auto moeda:coins){

      int diferenca = valSelec-moeda;

      // Se a diferença entre o valor selecionado e o valor da moeda for maior que 0
      if(diferenca >=0){

        // Adiciona o valor da moeda ao vetor contador
        count[valSelec] += count[diferenca];
      }
      
    }
  }
  cout << count[total] << endl;
}
