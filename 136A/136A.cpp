#include<iostream>
using namespace std;

// friend number i gave a gift to a 
// friend number pi

// friends received exactly one gift

// friend i the number of a friend who has given him a gift

// n - friends

// vet[n spaces]

// pi gave a gift to friend i

// 2 59 178 5

// Can be gift to themselves

int main(){

  int i, n=0, m;

  cin >> n;

  int *vet = new int[n], *copy = new int[n];

  // for
      // n = vet[i];
      // count [n] = i;


  for(i=0; i<n; i++){
    cin>>vet[i];
    m = vet[i];
    copy[m]=i;
  }

  // print count
  for(i =0; i<n; i++){
    cout << copy[i] << " ";
  }

  delete[] vet;

  return 0;
}