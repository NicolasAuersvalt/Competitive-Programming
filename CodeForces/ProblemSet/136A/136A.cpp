#include<iostream>
using namespace std;

#define MAX 101

int main(){

  int i, n=0, m;
  cin >> n;
  
  int vet[MAX];

  for(i=1; i<=n; i++){
    cin>>m;
    vet[m] = i;
  }

  for(i =1; i<=n; i++){
    cout << vet[i] << " ";
  }  

  return 0;
}