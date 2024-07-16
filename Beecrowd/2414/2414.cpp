#include<bits/stdc++.h>

using namespace std;


int main(){
/* 

  // Primeiro método


  // Vetor de tamanho aleatório
  int vet[100];
  int a=1, i=0;

  // Armazena valores até receber a entrada 0

  while(a){
    
    cin >> vet[i];
    
    if(vet[i] == 0){
      
      a = 0;
      
    }
    i++;
  }
  
  sort(vet, vet+i);
  
  cout << vet[i-1] << endl;
*/

  // Segundo Método
  vector<int> vet;
  int i=0;

  // Recebe os valores em uma única linha, sem teclar enter, e armazena no vetor

  while(cin >> i){
    if(i==0){
      break;
    }
    vet.push_back(i);
  }
  
  // Ordena o vetor
  sort(vet.begin(), vet.end());
  
  // Imprime o último valor do vetor
  cout << vet[vet.size()-1] << endl;
    
}