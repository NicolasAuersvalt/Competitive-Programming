#include<iostream>
using namespace std;

int main(){

  char vet[][10] = {"I ", "hate ", "love ", "that ", "it"};
  int n=0, i, j=0;
  
  cin >> n;

  for(i=0; i<n; i++){
    // j=0 (hate)
    if(j==0)
    {
      // I hate
      cout << vet[0] << vet[1];
      j++;

    }
    else
    {
      // I love
      cout << vet[0] << vet[2];
      j--;
    }

    if(i==(n-1)){// End
      cout << vet[4];
    }
    else{
      cout << vet[3];
    }
  }

  return 0;
}