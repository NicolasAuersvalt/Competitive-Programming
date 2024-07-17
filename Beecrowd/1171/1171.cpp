#include<bits/stdc++.h>

using namespace std;

int main(){

  int n, i;
  cin >> n;
  vector<int> vet;

  for(i=0; i<n; i++){
    // Lê entrada e coloca no vetor
    int x;
    cin >> x;
    vet.push_back(x);
    
  }

  // Ordena o vetor

  sort(vet.begin(), vet.end());

  // Faz a contagem de ocorrências

  int cont, j;

  for(i=0; i<n; i++){
    cont = 0;
    int val = vet[i];
    while(vet[i]==val){
      cont++;
      i++;
    }
    i--;
    cout << val << " aparece " << cont << " vez(es)" << endl;
  }

  return 0;
}
