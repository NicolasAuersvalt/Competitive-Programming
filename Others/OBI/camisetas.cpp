#include<bits/stdc++.h>

using namespace std;


int main(){

  int n=0, i; 

  cin >> n;
  cin.ignore();

  int vet[3] = {0, 0, 0};
  int val=0;

  for(i=0; i<n; i++){
    cin >> val;
    cin.ignore();

    vet[val]++;
  }
  int peq=0, med=0;
  cin >> peq;
  cin >> med;

  if(peq!=vet[1]||med!=vet[2]){
    printf("N\n");
  }		
  else{
    printf("S\n");
  }
  return 0;
}
