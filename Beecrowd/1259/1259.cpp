#include<bits/stdc++.h>
using namespace std;

int main(){

  int n=0, i;
  cin >> n;
  cin.ignore();
  int vet[n];
  
  for(i=0; i<n; i++){
    cin >> vet[i];
    cin.ignore();

  }
  
  // ordena o vetor
  sort(vet, vet+n);

  // coloca nas queue par e queue impar
  queue<int> par;
  stack<int> impar;

  for(i=0; i<n; i++){
    if(vet[i]%2==0){
      par.push(vet[i]);
    }
    else{
      impar.push(vet[i]);
    }
  }
  
  // exibe a par e depois a ímpar
  while(!par.empty()){
    cout << par.front() << endl;
    par.pop();
  }
  while(!impar.empty()){
    cout << impar.top() << endl;
    impar.pop();
  }
  
  return 0;
}