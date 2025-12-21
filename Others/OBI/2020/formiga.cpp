#include<bits/stdc++.h>

using namespace std;

int dfs(vector<vector<int>> &adjacencia, vector<bool> &visitados, int partida, vector<int> &alturas){
  
  if(visitados[partida]) return 1;

  visitados[partida] = true;

  int dist, max = 0;

  for(auto sala:adjacencia[partida]){

    dist = 1;

    if(alturas[sala] <= alturas[partida]){

      if(!visitados[sala]){
        
        dist += dfs(adjacencia, visitados, sala, alturas);

        if(dist>max){
          max = dist;
        }
      }
    }
  }
  return max;

}

int main(){

  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int salao, tuneis, partida;
  cin >> salao >> tuneis >> partida;

  vector<int> alturas(salao+1,0);


  for(int i=1; i<(salao+1); i++){
    cin >> alturas[i];
  }

  vector<vector<int>> adjacencia(salao+1);

  vector<bool> visitados(salao+1, false);

  for(int i=0; i<tuneis; i++){
    int a, b;
    cin >> a >> b;
    adjacencia[a].push_back(b);
    adjacencia[b].push_back(a);
  }

  int max = dfs(adjacencia, visitados, partida, alturas);

  cout << max << endl;

  return 0;
}