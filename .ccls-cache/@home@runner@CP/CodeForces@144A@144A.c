#include<iostream>
using namespace std;

int main(){
  int n=0, i, vet[100], max=0, min=0, posMax=0, posMin=0;

  cin >> n;

  for(i=0; i<n; i++){
    
    cin >> vet[i];
    cout << vet[i] << "\n";
    
    if(i=0){
      cout << "Entrou";
      max = vet[i];
      max = vet[i];
    }
    
    if(vet[i]>max){
      cout << "max";
      max = vet[i];
      posMax = i;
    }
    
    if(vet[i]<min){
      cout << "min";
      min = vet[i];
      posMin = i;
    }
    cout << "ahsahfawfa";
  }
  
  i = posMax + posMin;
  if(posMax>posMin){
    i--;
  }
  cout << i;
  
  return 0;
  
}