#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
  cin.tie(0); 
  ios_base::sync_with_stdio(0);

  int qtd, mon, i, j;
  cin >> qtd >> mon;

  // Cria e zera o vetor
  vector<int> alturas(qtd, 0);

  // Recebe os valores e coloca no vetor
  for(i =0; i<qtd; i++){
    cin >> alturas[i];
  }

  // Ordena o vetor crescentemente
  sort(alturas.begin(), alturas.end());

  i=qtd-1;
  j = i-1;
  while(mon>0){
    if(j<0){
      cout << 0 << endl;
      return 0;
    }
    if(alturas[i]<=0){
      cout << 0 << endl;
      return 0;
    }

    // ordenado
    while(alturas[j]>alturas[i]){
      alturas[j]--;
      mon--;
    }
    
    // iguais
    while(alturas[i]==alturas[j] && j>1){
      i = j;
      j--;
    }
    
    while(alturas[i]>alturas[j]){
      alturas[i]--;
      mon--;
    }
    
  }

  // printa a posição com a menor qtd de cabelo até o valor 0
  cout << alturas[qtd-1] << endl;

}