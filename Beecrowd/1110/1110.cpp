#include<bits/stdc++.h>

using namespace std;

int main(){

  int ativo = 1; // flag do while
  
  // Lê input até getline = 0
  while(ativo){
    int n=0;
    cin >> n;

    queue<int> cartas;
    
    if(n==0){
      ativo = 0;
    }
      
    else{
      int i;
      for(i=1; i <= n; i++){
        cartas.push(i);
      }

      // Jogue fora a carta do topo 

      // Topo (1, 2, 3, 4, 5, 6, 7) Base

      while(cartas.size()>1){
        

        // 1 Remove o topo
      
        cartas.pop();
      
        // Remove e armazena o topo e coloca na base

        int topo = cartas.front();
        
        cartas.pop();

      }

      cout << cartas.front() << endl;
    }
  }

  return 0;
}