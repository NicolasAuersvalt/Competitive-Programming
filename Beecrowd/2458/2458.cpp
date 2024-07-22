#include<bits/stdc++.h>

using namespace std;

int percorrer(char** mat, int tam, int** pos, int i, int j, int* refused, int qtd){
  int repetido=0;
  if(pos[i][j]==0){
    // Anula a posição da matriz de adjacência pos
    if((i<tam) && (j < tam)){
      pos[i][j]=1;
    }  

    // Direita

    if(mat[i][j]=='>'){
      if(j==(tam-1)){
        *refused = *refused + qtd;
        pos[i][j]++;
        return 1;
      }
      else{
        repetido = percorrer(mat, tam, pos, i, j+1, refused, qtd+1);
          if(repetido){
            pos[i][j]++;
          }
      }
    }
    
    // Esquerda
      
    else if(mat[i][j]=='<'){
      if(j==0){
        *refused = *refused + qtd;
        pos[i][j]++;
        return 1;
      }
      else{
        repetido = percorrer(mat, tam, pos, i, j-1, refused, qtd+1);
        if(repetido)
          pos[i][j]++;
      }
    }


    // Baixo
      
    else if(mat[i][j]=='V'){
      
      if(i==(tam-1)){
        *refused = *refused + qtd;
        pos[i][j]++;
        return 1;
      }
      else{
        repetido = percorrer(mat, tam, pos, i+1, j, refused, qtd+1);
        if(repetido)
          pos[i][j]++;
      }   
    }

    // Cima
      
    else if(mat[i][j]=='A'){
      if(i==0){
        *refused = *refused + qtd;
        pos[i][j]++;
        return 1;
      }
      else{
        repetido = percorrer(mat, tam, pos, i-1, j, refused, qtd+1);
        if(repetido)
          pos[i][j]++;
       }
      }
  }
  else if(pos[i][j]==2){
    *refused = *refused + qtd-1;
    return 1;
  }
  return repetido;
}


int main(){

  int tam, i, j;
  cin >> tam;

  char** mat = new char*[tam];

  for(i=0; i<tam; i++){
    mat[i] = new char[tam];
  }
  
  for(i=0; i< tam; i++){
    for(int j=0; j< tam; j++){
      cin >> mat[i][j];
    }
  }

  // Grafo (matriz de adjacência)

  int** pos = new int*[tam];
  int rec=0;
  
  for(i=0; i<tam; i++){
    pos[i] = new int[tam];
  }
  for(i=0; i<tam; i++){
    for(j=0; j<tam; j++){
      pos[i][j] = 0;
    }
  }

  for(i=0; i< tam; i++){
    for(j=0; j< tam; j++){
      if(pos[i][j]==0){
        percorrer(mat, tam, pos, i, j, &rec, 1);
      }
    }
  }

  cout << tam*tam-rec << endl;
  
  
  return 0;
}