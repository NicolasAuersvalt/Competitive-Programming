#include<bits/stdc++.h>

using namespace std;

int dfs(vector<vector<int>>& adj, vector<bool>& visitados, int partida, int destino, int sid){

  visitados[partida] = 1;

  for(int nos:adj[partida]){

    if(nos==destino){
      return 1;
    }
    
    cout << "partida: " << partida << " Nó: "<< nos << " destino: " << destino << endl;
    
    if(nos!=sid){
      if(!visitados[nos]){
  
          if(dfs(adj, visitados, nos, destino, sid))
            return 1;
  
      }
    }
  }
  return 0;
}


int main(){
  cin.tie(0); 
  ios_base::sync_with_stdio(0);

  int qtd, perguntas;

  cin >> qtd >> perguntas;

  vector<vector<int>> adj(1000);

  for(int i=1; i<qtd; i++){
    int a, b;
    cin >> a >> b;

    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  for(int i=0; i<perguntas; i++){

    vector<bool> visitados(1000, false);

    int leo, ema, sid;
    cin >> leo >> ema >> sid;

    if(dfs(adj, visitados, leo, ema, sid)){
      cout << "SIM" << endl;
    }

    else{
      cout << "NÃO" << endl;
    }
  }

  return 0;
}