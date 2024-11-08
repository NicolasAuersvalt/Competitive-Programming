#include<bits/stdc++.h>
using namespace std;

int main(){

  int vetSize, queueSize;

  cin >> vetSize >> queueSize;
  vector<int> vet(vetSize);
  queue<int> fila;

  int i;
  for(i=0; i<vetSize; i++){
    int x;
    cin >> x;
    vet[i] = x;
  }
  
  for(i=0; i<queueSize; i++){
    int x;
    cin >> x;
    fila.push(x);
  }
  i=0;
  int tempo = 0, j=0, esq=0, dir=vetSize-1;
  
  while(!fila.empty()){
    j = (dir + esq) / 2;
    

    if(vet[j]==fila.front()){
      if(i<j)
        tempo+=j-i;
      else
        tempo+= i-j;
      i=j;
      fila.pop();
      esq = 0;
      dir = vetSize-1;
    }
    
    else if(fila.front() > vet[j]){ // vet[j] Menor
      esq = j + 1;
    }   

    else if(fila.front() < vet[j]){ // vet[j] Maior
      dir = j - 1;
    }
    
  }

  cout << tempo << endl;
  return 0;
  
  
  
}