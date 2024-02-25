#include<iostream>
using namespace std;

// last digit 0 if 2 last given numbers is 0 (if)

int main(){

  int n=0, value=0, i, vet[100], novo=0, j=0;

  cin >> n;
  cin >> value;
  value += n;
  
  for(i=1; (value/i) > 0; i*=10){
    cout << value%i << "\n";
    if((value%i)!=1){
      cout << "DEU";
      vet[j] = 1;
    }

    else{
      vet[j] = 0;
    }
    j++;
  }

  for(i=0; i<j; i++){
    cout << vet[i];
  }

  return 0;
}