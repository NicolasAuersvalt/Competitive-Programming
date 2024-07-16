#include<iostream>

using namespace std;

int main(){

  int n, i, f;

  cin >> n >> i >> f;
  
  int vet[n], j, k;
  
  for(j=0; j<n; j++){
    cin >> vet[j];
  }

  // Faz a verificação de soma > i e < f

  int sum=0;

  for(j=0; j<n-1; j++){
    for(k=j+1; k<n; k++){
      if((vet[j]+vet[k]>=i) && (vet[j]+vet[k]<=f)){
        
        sum++;
      }
    }
  }
  cout << sum << endl;
  

  return 0;
}