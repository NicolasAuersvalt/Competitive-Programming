#include<bits/stdc++.h>

using namespace std;

int main(){
  
  int i, size=0, tests=0;
  cin >> tests;
  
  for(i=0; i<tests; i++){
    
  cin >> size;
    
  char vet[size];
  int bitado[256];
  int j, k, rep =0;
    
    for(j=0; j<size; j++){
      cin >> vet[j];
      }

    for(j=0; j<256; j++){
      bitado[j] = 0;
    }

    for(j=0; j<size; j++){
      int pos = static_cast<int> (vet[j]);
      bitado[pos] += 1;
    }
    
    for(j=0; j<256; j++){
      if(bitado[j] >1){
        rep+= bitado[j]-1;
      }
    }

    
    cout << (size *2)-rep << endl;
    
  }
}