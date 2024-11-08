#include<bits/stdc++.h>

using namespace std;

int main(){

  vector<int> vet;
  int i;
  // Lê entrada de valores indefinidamente e armazena no vetor
  while(cin >> i){
    
  }

  
  vector<int> vet2(vet.begin(), vet.end());
  // inverte o vetor vet e coloca em vet3
  vector<int> vet3(vet.rbegin(), vet.rend());
  
  sort(vet2.begin(), vet2.end());

  bool cresc = true, dec = true;
  
  for(i=0; i<vet.size(); i++){
    if(vet[i] != vet2[i]){
      cresc = false;
    }
    else if(vet[i] != vet3[i]){
      dec = false;
    } 
  }

  if(cresc)
    cout << "C" << endl;
  else if(dec)
    cout << "D" << endl;
  else
    cout << "N" << endl;
  
  return 0;
}