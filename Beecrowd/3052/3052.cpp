#include<iostream>

using namespace std;

int main(){

  int n, m, i, j;
  cin >> n >> m;

  char** mat = new char*[n];

  for(i=0; i<n; i++){
    mat[i] = new char[m];
  }
  
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      cin >> mat[i][j];
    }
  }
  

  int molhado = 1;
  while(molhado){
    molhado = 0;
    
    for(j=0; j<m; j++){
      
      for(i=0; i<n; i++){

        if(mat[i][j]=='.'){
  
          // à esquerda
          if(i>0){
            if(mat[i-1][j]=='o'){
              mat[i][j] = 'o';
              molhado = 1;
            }
          }
    
          // à esquerda baixo

          if((i<n-1) && (j>0)){
            if(mat[i][j-1]=='o' && mat[i+1][j-1]=='#'){
              mat[i][j]='o';
              molhado = 1;
              
            }
          }
          
          // à Direita baixo
          
          if((i<n-1)&&(j<m-1)){            
            if(mat[i][j+1]=='o'&&mat[i+1][j+1]=='#'){
              mat[i][j]='o';
              molhado = 1;
            }
          }
        }
      }
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      cout << mat[i][j];
    }
    cout << endl;
  }

  return 0;
}