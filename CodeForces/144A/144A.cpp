#include<iostream>
using namespace std;

int main(){
  int n=0, i, vet[100], max=0, min=0, posMax=0, posMin=0;

  cin >> n;

  for(i=0; i<n; i++){
    
    cin >> vet[i];
    
    if(i==0){
      max = vet[i];
      min = vet[i];
    }
    
    if(vet[i]>max){
      max = vet[i];
      posMax = i;
    }
    
    if(vet[i]<=min){
      min = vet[i];
      posMin = i;
    }
  }
  
  i = posMax + (n-posMin-1);

  if(posMax>posMin){
    i--;
  }
  cout << i;
  
  return 0;
  
}