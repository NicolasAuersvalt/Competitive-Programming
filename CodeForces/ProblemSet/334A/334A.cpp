#include<iostream>
using namespace std;


// 10 10 10 01 10 10


// if sum between last one and actual result = 20 (connected)
// else, if the sum result <20 (disconnected)


int main(){

  int i, n, group=0;

  // vector (n positions)

  cin >> n;

  int *vet = new int[n];
  
  for(i=0; i<n; i++){
    cin >> vet[i];

    // if vet[i] + vet[i-1] == 20 (connected)
    if(i>0 && (vet[i]+vet[i-1]==20 || vet[i]+vet[i-1]==2)){
    }
    else{
      group++;
    }
  }

  cout << group;

  delete[] vet;

  return 0;
}