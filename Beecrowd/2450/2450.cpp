#include<bits/stdc++.h>

using namespace std;

int main(){

  int m, n, i, j;
  cin >> m >> n;

  int ** mat = new int*[m];

  for(i=0; i<m; i++){
    mat[i] = new int[n];
  }

  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
      cin >> mat[i][j];
    }
  }

  // Nula
  bool val = true, nulo = false;
  for(i=0; i<m; i++){
    int sum = 0;
    for(j=0; j<n; j++){
      sum+=mat[i][j];
    }
    if(sum == 0){
      nulo = true;
    }
    else{
      if(nulo){
        cout << "N" << endl;
        return 0;
      }
    }
  }

  // Esquerda e Inferior
  int k, l;
  
  for(i=0; i<m; i++){
    int sum;
    for(j=0; j<n-1 && mat[i][j] == 0; j++);
    if(mat[i][j]!=0){
      for(k=j; k>0; k--){
        if(i<m){
            for(l=i+1; l<m; l++){
              if(mat[l][k]!=0){
                cout << "N" << endl;
                return 0;
              }
            }
        }
      }
    }
  }
  cout << "S" << endl;

  return 0;
}