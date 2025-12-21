#include<iostream>
using namespace std;

int main(){

  int n=0,i, j, count=0;
  cin >> n;
  
  int** mat = new int*[n];
  for(i=0; i<n; i++){
    mat[i] = new int[2];
  }

  for(i=0; i<n; i++){
      cin >> mat[i][0];
      cin >>  mat[i][1];
  }
  
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(mat[i][0]==mat[j][1])
        count++;
    }
  }
  cout << count;

  for(i=0; i<n; i++){
    delete[] mat[i];
  }
  delete[] mat;
  
  return 0;
}