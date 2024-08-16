#include<bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std;

int main(){

  // Coloca como infinito todas as distâncias
  for(int i=1; i<n; i++){
    distance[i] = INF;
  }

  // Ponto de partida
  distance[x] = 0;

  // Adiciona em uma fila todos os vértices
  q.push({0,x});

  // Enquanto a fila tiver coisa
  while(!q.empty()){
    
    // Pega o vértice com menor distância
    int a = q.top().second;

    // Remove o vértice da fila
    q.pop();

    // Para cada vizinho de a
    if(processed[a]) continue;

    // Marca como processado
    processed[a] = true;

    // Para cada vizinho de a
    for(auto u: adj[a]){

      // 
      int b = u.first;
      int w = u.second;

      if(distance[a]+w < distance[b]){
        distance[b] = distance[a]+w;
        q.push({-distance[b],b})
      }
    }
  }
  
  return 0;
}