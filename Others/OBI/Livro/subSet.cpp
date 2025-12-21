#include<bits/stdc++.h>
#define endl "\n"
#define INF 0x3f3f3f3f

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int total = 6;
  vector<int> valores = {1, 6, 5, 9, 2, 10};
  vector<int> comprimento(total,0);


  // Percorre todos os valores do vetor
  for(int atual=0; atual<=total; atual++){

    for(int i=0;i<comprimento.size();i++){
      cout << comprimento[i] << " " ;
    }
    cout << endl;

    // Marca em comprimento como percorrido UMA posição, já que considera o próprio valor
    comprimento[atual] = 1;

    // Para todos os valores anteriores ao atual
    for(int anterior=0; anterior<atual; anterior++){

      // Se houver uma ocorrência menor que o valor atual
      if(valores[anterior] < valores[atual]){

        // Marca como percorrido a posição anterior
        comprimento[atual] = max(comprimento[atual], comprimento[anterior]+1);
      }
    }
  }
  return 0;
}