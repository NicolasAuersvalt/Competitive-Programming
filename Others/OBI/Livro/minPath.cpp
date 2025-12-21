#include<bits/stdc++.h>
#define endl "\n"
#define INF 0x3f3f3f3f

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n = 3, m=3;
  
  int** mat = new int*[n];
  for(int i=0; i<n; i++){
    mat[i] = new int[m];
  }

  int** sum = new int*[n];
  for(int i=0; i<n; i++){
    sum[i] = new int[m];
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> mat[i][j];
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++)
      sum[i][j] = 0;
  }

  // Define as três primeiras casas para comparação
  sum[0][0] = mat[0][0];
  sum[0][1] = mat[0][1] + mat[0][0];
  sum[1][0] = mat[1][0] + mat[0][0];
  
  // Para CADA POSIÇÃO da matriz
  for(int linha=1; linha<n; linha++){
    for(int coluna=1; coluna<m; coluna++){

      // Soma os elementos da esquerda e acima e armazena na posicão linha-coluna
      sum[linha][coluna] = max(sum[linha][coluna-1], sum[linha-1][coluna])+mat[linha][coluna];
    
    }
  }

  cout << sum[n-1][m-1] << endl;
  return 0;
}