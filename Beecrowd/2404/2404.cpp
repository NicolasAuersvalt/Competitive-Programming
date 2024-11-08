#include<bits/stdc++.h>

using namespace std;

int dfs(int** mat, int tam, int ini, int fim){
  
  if(ini==fim){
    return 0;
  }

  if(mat[ini][fim]==0)
    return 0;
  
  if(fim == tam){
    return mat[ini][fim];
  }

  cout << "(IDA) inicio: " << ini << " fim: " << fim << endl;

  bool primeiro = true;
  int min;
  
  for(int i = 0; i< tam; i++){
    int total = dfs(mat, tam, fim, i);
    
    if(total != 0){
      
      total += mat[ini][fim];
      
      if(primeiro ){
        min = total;
        primeiro = false;
      
      }
        
      else if((total<min) && (ini == 1)){
        min = total;
      }
      
    }
    
    cout << "total: " << total << endl;
  }
  cout << "(VOLTA) inicio: " << ini << " fim: " << fim << endl;
  return min;
  
}

int main(){

  int city, rod, i, j;

  cin >> city >> rod;
  city++;

  int** mat = new int*[city];
  for(i=0; i<city; i++){
    mat[i] = new int[city];
  }
  
  for(i=0; i<rod; i++){
    int x, y, qtd;
    cin >> x >> y >> qtd;
    mat[x][y] = qtd;
  }

  int min = dfs(mat, city, 1, 2);

  cout << min << endl;
  
  return 0;
}